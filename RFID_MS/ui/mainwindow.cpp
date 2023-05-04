#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include "lib/protocol.h"
#include <QDateTime>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    adminPage(nullptr),
    recordPage(nullptr)
{
    ui->setupUi(this);
    PageInit();
    serialportInit();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::PageInit()
{
    adminPage = new admin(this);
    recordPage = new record(this);

    ui->stackedWidget->addWidget(adminPage);
    ui->stackedWidget->addWidget(recordPage);
    ui->stackedWidget->setCurrentIndex(0);

    auto l = ui->tool->children();
    for(auto it:l)
    {
        if(it->objectName().contains("btn"))
        {
            connect(static_cast<QPushButton*>(it), &QPushButton::clicked, this, &MainWindow::dealMenu);
        }
    }
}

void MainWindow::dealMenu()
{
    auto str = sender()->objectName();
    do
    {
        if("btn_admin" == str)
        {
            ui->stackedWidget->setCurrentIndex(0);
            break;
        }
        else if("btn_record" == str)
        {
            ui->stackedWidget->setCurrentIndex(1);
            break;
        }
    }while(false);
}

void MainWindow::serialportInit()
{
    //获取所有的可用串口
    auto portsInfo = QSerialPortInfo::availablePorts();
    for (auto& info : portsInfo) {
        qInfo() << info.description() << info.portName() << info.systemLocation();
        ui->port_choose->addItem(info.portName(), info.portName());
    }
}

void MainWindow::serialSend(QString strData)
{
    serialPort_.write(strData.toLocal8Bit());
}

void MainWindow::on_rbtn_connect_clicked()
{
    //关闭串口
    if (serialPort_.isOpen()) {
        serialPort_.close();
        return;
    }

    //获取串口名
    auto portName = ui->port_choose->currentData().toString();

    serialPort_.setPortName(portName);
    serialPort_.setBaudRate(115200);
    serialPort_.setStopBits(QSerialPort::OneStop);
    serialPort_.setDataBits(QSerialPort::Data8);
    serialPort_.setParity(QSerialPort::NoParity);

    //打开串口
    if (!serialPort_.open(QIODevice::ReadWrite)) {
        QMessageBox::warning(this, "warning", portName + "open failed:" + serialPort_.errorString());
        return;
    } else {

    }

    connect(&serialPort_, &QSerialPort::readyRead, this, &MainWindow::onReadyRead);
}

void MainWindow::onReadyRead()
{
    bool iscmd = 0;
    static QString str;
    int begin;
    int end;
    QString strCmd;
    QByteArray data = serialPort_.readAll();
    str += data;
    begin = str.indexOf("\xFC\xFC");
    if(begin != -1)
    {
        end = str.indexOf("\r\n");
        if(end != -1)
        {
            strCmd = str.mid(begin, end - begin + 2);
            str = str.mid(end + 2);
            iscmd = 1;
        }
    }
//    qDebug() << str;
//    qDebug() << strCmd;
    if(iscmd)
    {
        //协议处理
        protocol::protocolDeal(strCmd);

        //更新下位机的时钟
        QDateTime curDateTime = QDateTime::currentDateTime();
        QString strDateTime = curDateTime.toString("SET:yyyy-MM-dd-hh:mm:ss\r\n");
        qDebug() << strDateTime;
        serialSend(strDateTime);
    }
}

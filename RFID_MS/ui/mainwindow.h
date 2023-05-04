#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "admin.h"
#include "record.h"
#include <QSerialPortInfo>
#include <QSerialPort>
#include <QMessageBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void PageInit();
    void dealMenu();
    void serialportInit();
    void serialSend(QString strData);
private slots:
    void on_rbtn_connect_clicked();
    void onReadyRead();
private:
    Ui::MainWindow *ui;
    admin *adminPage;
    record *recordPage;
    QSerialPort serialPort_;
};

#endif // MAINWINDOW_H

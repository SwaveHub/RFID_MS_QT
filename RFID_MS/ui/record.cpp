#include "record.h"
#include "ui_record.h"
#include "lib/sqlmgr.h"
#include <QDebug>
#include "login.h"

record::record(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::record)
{
    ui->setupUi(this);
    ui->tb_record->setModel(&recordModel);
    ui->tb_record->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tb_record->setSelectionBehavior(QAbstractItemView::SelectRows);
    // 设置表格调整模式为适应表格内容
    ui->tb_record->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    // 设置最小的宽度
    ui->tb_record->horizontalHeader()->setMinimumSectionSize(75);
    recordModel.setHorizontalHeaderLabels(QStringList{"名称","货架号","层号","TID","入库时间","出库时间"});

#if 0
    for(int i = 0; i < 10; i++)
    {
        QList<QStandardItem*> items;
        items.append(new QStandardItem("cola"));
        items.append(new QStandardItem("1"));
        items.append(new QStandardItem("2"));
        items.append(new QStandardItem("69952000400582D1160A0000"));
        items.append(new QStandardItem("2023年5月1日21:28"));
        items.append(new QStandardItem("2023年5月2日21:28"));
        recordModel.appendRow(items);
    }
#endif
}

record::~record()
{
    delete ui;
}

void record::on_btn_confirm_clicked()
{
    QString condition = ui->ed_search->text(); //获取搜索框中内容

    QVector<QStringList> vec;   //保存返回的所有结果
    vec = SqlMgr::getInstance()->getRecord(QString("WHERE item LIKE '%%1%' OR shelf = '%2'").arg(condition, condition));
    QVector<QStringList>::iterator iter;

    recordModel.removeRows(0, recordModel.rowCount());  //清空所有行

    int i = 1;
    for(iter = vec.begin();iter != vec.end(); iter++) { //显示返回的所有结果
        qDebug() << "=====================================================";
        qDebug() << QString("QStringList%1:").arg(i) << *iter;
        qDebug() << QString("QStringList%1的长度:").arg(i) << iter->size();
        qDebug() << QString("QStringList%1中的QString:").arg(i) <<(*iter).at(0).toLocal8Bit().constData();
        i++;
        if (login::isPermit((*iter).at(2).toInt()))
        {
            QList<QStandardItem*> items;
            items.append(new QStandardItem(QString("%1").arg((*iter).at(1))));
            items.append(new QStandardItem(QString("%1").arg((*iter).at(2))));
            items.append(new QStandardItem(QString("%1").arg((*iter).at(3))));
            items.append(new QStandardItem(QString("%1").arg((*iter).at(4))));
            items.append(new QStandardItem(QString("%1").arg((*iter).at(5))));
            items.append(new QStandardItem(QString("%1").arg((*iter).at(6))));
            recordModel.appendRow(items);
        }
    }
    ui->label_sum->setText(QString("搜索结果：%1").arg(i-1));
}


void record::on_ed_search_returnPressed()
{
    QString condition = ui->ed_search->text(); //获取搜索框中内容

    QVector<QStringList> vec;   //保存返回的所有结果
    vec = SqlMgr::getInstance()->getRecord(QString("WHERE item LIKE '%%1%' OR shelf = '%2'").arg(condition, condition));
    QVector<QStringList>::iterator iter;

    recordModel.removeRows(0, recordModel.rowCount());  //清空所有行

    int i = 1;
    for(iter = vec.begin();iter != vec.end(); iter++) { //显示返回的所有结果
        qDebug() << "=====================================================";
        qDebug() << QString("QStringList%1:").arg(i) << *iter;
        qDebug() << QString("QStringList%1的长度:").arg(i) << iter->size();
        qDebug() << QString("QStringList%1中的QString:").arg(i) <<(*iter).at(0).toLocal8Bit().constData();
        i++;
        if (login::isPermit((*iter).at(2).toInt()))
        {
            QList<QStandardItem*> items;
            items.append(new QStandardItem(QString("%1").arg((*iter).at(1))));
            items.append(new QStandardItem(QString("%1").arg((*iter).at(2))));
            items.append(new QStandardItem(QString("%1").arg((*iter).at(3))));
            items.append(new QStandardItem(QString("%1").arg((*iter).at(4))));
            items.append(new QStandardItem(QString("%1").arg((*iter).at(5))));
            items.append(new QStandardItem(QString("%1").arg((*iter).at(6))));
            recordModel.appendRow(items);
        }
    }
    ui->label_sum->setText(QString("搜索结果：%1").arg(i-1));
}


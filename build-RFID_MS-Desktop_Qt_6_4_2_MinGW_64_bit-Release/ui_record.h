/********************************************************************************
** Form generated from reading UI file 'record.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECORD_H
#define UI_RECORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_record
{
public:
    QGridLayout *gridLayout_2;
    QLabel *lb_title;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *ed_search;
    QPushButton *btn_confirm;
    QSpacerItem *horizontalSpacer;
    QTableView *tb_record;

    void setupUi(QWidget *record)
    {
        if (record->objectName().isEmpty())
            record->setObjectName("record");
        record->resize(700, 500);
        record->setMinimumSize(QSize(700, 500));
        gridLayout_2 = new QGridLayout(record);
        gridLayout_2->setObjectName("gridLayout_2");
        lb_title = new QLabel(record);
        lb_title->setObjectName("lb_title");
        QFont font;
        font.setPointSize(11);
        lb_title->setFont(font);

        gridLayout_2->addWidget(lb_title, 0, 0, 1, 1);

        widget = new QWidget(record);
        widget->setObjectName("widget");
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(widget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        ed_search = new QLineEdit(widget);
        ed_search->setObjectName("ed_search");

        gridLayout->addWidget(ed_search, 0, 1, 1, 1);

        btn_confirm = new QPushButton(widget);
        btn_confirm->setObjectName("btn_confirm");

        gridLayout->addWidget(btn_confirm, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(259, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 3, 1, 1);


        gridLayout_2->addWidget(widget, 1, 0, 1, 1);

        tb_record = new QTableView(record);
        tb_record->setObjectName("tb_record");

        gridLayout_2->addWidget(tb_record, 2, 0, 1, 1);


        retranslateUi(record);

        QMetaObject::connectSlotsByName(record);
    } // setupUi

    void retranslateUi(QWidget *record)
    {
        record->setWindowTitle(QCoreApplication::translate("record", "Form", nullptr));
        lb_title->setText(QCoreApplication::translate("record", "\350\264\247\347\211\251\344\277\241\346\201\257\346\237\245\350\257\242", nullptr));
        label->setText(QCoreApplication::translate("record", "\346\220\234\347\264\242", nullptr));
        btn_confirm->setText(QCoreApplication::translate("record", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class record: public Ui_record {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECORD_H

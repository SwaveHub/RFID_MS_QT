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
#include <QtWidgets/QCheckBox>
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
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QPushButton *btn_confirm;
    QLineEdit *ed_search;
    QLabel *label_sum;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QCheckBox *cbox_in;
    QCheckBox *cbox_out;
    QTableView *tb_record;
    QLabel *lb_title;

    void setupUi(QWidget *record)
    {
        if (record->objectName().isEmpty())
            record->setObjectName("record");
        record->resize(700, 500);
        record->setMinimumSize(QSize(700, 500));
        gridLayout_2 = new QGridLayout(record);
        gridLayout_2->setObjectName("gridLayout_2");
        widget = new QWidget(record);
        widget->setObjectName("widget");
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setObjectName("gridLayout_3");
        label = new QLabel(widget);
        label->setObjectName("label");

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        btn_confirm = new QPushButton(widget);
        btn_confirm->setObjectName("btn_confirm");

        gridLayout_3->addWidget(btn_confirm, 0, 2, 1, 1);

        ed_search = new QLineEdit(widget);
        ed_search->setObjectName("ed_search");

        gridLayout_3->addWidget(ed_search, 0, 1, 1, 1);

        label_sum = new QLabel(widget);
        label_sum->setObjectName("label_sum");

        gridLayout_3->addWidget(label_sum, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(259, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 4, 1, 1);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName("widget_2");
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName("gridLayout");
        cbox_in = new QCheckBox(widget_2);
        cbox_in->setObjectName("cbox_in");

        gridLayout->addWidget(cbox_in, 0, 0, 1, 1);

        cbox_out = new QCheckBox(widget_2);
        cbox_out->setObjectName("cbox_out");

        gridLayout->addWidget(cbox_out, 0, 1, 1, 1);


        gridLayout_3->addWidget(widget_2, 1, 1, 1, 1);


        gridLayout_2->addWidget(widget, 2, 0, 1, 1);

        tb_record = new QTableView(record);
        tb_record->setObjectName("tb_record");

        gridLayout_2->addWidget(tb_record, 3, 0, 1, 1);

        lb_title = new QLabel(record);
        lb_title->setObjectName("lb_title");
        QFont font;
        font.setPointSize(11);
        lb_title->setFont(font);

        gridLayout_2->addWidget(lb_title, 1, 0, 1, 1);


        retranslateUi(record);

        QMetaObject::connectSlotsByName(record);
    } // setupUi

    void retranslateUi(QWidget *record)
    {
        record->setWindowTitle(QCoreApplication::translate("record", "Form", nullptr));
        label->setText(QCoreApplication::translate("record", "\346\220\234\347\264\242", nullptr));
        btn_confirm->setText(QCoreApplication::translate("record", "\347\241\256\350\256\244", nullptr));
        label_sum->setText(QCoreApplication::translate("record", "\346\220\234\347\264\242\347\273\223\346\236\234\357\274\232", nullptr));
        cbox_in->setText(QCoreApplication::translate("record", "\346\230\276\347\244\272\346\234\252\345\207\272\345\272\223", nullptr));
        cbox_out->setText(QCoreApplication::translate("record", "\346\230\276\347\244\272\345\267\262\345\207\272\345\272\223", nullptr));
        lb_title->setText(QCoreApplication::translate("record", "\350\264\247\347\211\251\344\277\241\346\201\257\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class record: public Ui_record {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECORD_H

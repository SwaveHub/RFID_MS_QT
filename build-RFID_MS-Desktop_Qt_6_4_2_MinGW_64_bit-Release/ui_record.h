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
    QLabel *lb_title;
    QTableView *tb_record;
    QWidget *widget;
    QGridLayout *gridLayout;
    QCheckBox *cbox_out;
    QLabel *label_sum;
    QLabel *label;
    QCheckBox *cbox_in;
    QLineEdit *ed_search;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_confirm;

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

        tb_record = new QTableView(record);
        tb_record->setObjectName("tb_record");

        gridLayout_2->addWidget(tb_record, 2, 0, 1, 1);

        widget = new QWidget(record);
        widget->setObjectName("widget");
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        cbox_out = new QCheckBox(widget);
        cbox_out->setObjectName("cbox_out");

        gridLayout->addWidget(cbox_out, 1, 2, 1, 1);

        label_sum = new QLabel(widget);
        label_sum->setObjectName("label_sum");

        gridLayout->addWidget(label_sum, 0, 3, 1, 1);

        label = new QLabel(widget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        cbox_in = new QCheckBox(widget);
        cbox_in->setObjectName("cbox_in");

        gridLayout->addWidget(cbox_in, 1, 1, 1, 1);

        ed_search = new QLineEdit(widget);
        ed_search->setObjectName("ed_search");

        gridLayout->addWidget(ed_search, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(259, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 4, 1, 1);

        btn_confirm = new QPushButton(widget);
        btn_confirm->setObjectName("btn_confirm");

        gridLayout->addWidget(btn_confirm, 0, 2, 1, 1);


        gridLayout_2->addWidget(widget, 1, 0, 1, 1);


        retranslateUi(record);

        QMetaObject::connectSlotsByName(record);
    } // setupUi

    void retranslateUi(QWidget *record)
    {
        record->setWindowTitle(QCoreApplication::translate("record", "Form", nullptr));
        lb_title->setText(QCoreApplication::translate("record", "\350\264\247\347\211\251\344\277\241\346\201\257\346\237\245\350\257\242", nullptr));
        cbox_out->setText(QCoreApplication::translate("record", "\346\230\276\347\244\272\345\267\262\345\207\272\345\272\223", nullptr));
        label_sum->setText(QCoreApplication::translate("record", "\346\220\234\347\264\242\347\273\223\346\236\234\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("record", "\346\220\234\347\264\242", nullptr));
        cbox_in->setText(QCoreApplication::translate("record", "\346\230\276\347\244\272\346\234\252\345\207\272\345\272\223", nullptr));
        btn_confirm->setText(QCoreApplication::translate("record", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class record: public Ui_record {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECORD_H

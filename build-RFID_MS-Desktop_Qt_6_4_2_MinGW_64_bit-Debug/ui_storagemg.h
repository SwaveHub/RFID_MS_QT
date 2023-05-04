/********************************************************************************
** Form generated from reading UI file 'storagemg.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STORAGEMG_H
#define UI_STORAGEMG_H

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

class Ui_storagemg
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

    void setupUi(QWidget *storagemg)
    {
        if (storagemg->objectName().isEmpty())
            storagemg->setObjectName("storagemg");
        storagemg->resize(700, 500);
        gridLayout_2 = new QGridLayout(storagemg);
        gridLayout_2->setObjectName("gridLayout_2");
        lb_title = new QLabel(storagemg);
        lb_title->setObjectName("lb_title");
        QFont font;
        font.setPointSize(11);
        lb_title->setFont(font);

        gridLayout_2->addWidget(lb_title, 0, 0, 1, 1);

        widget = new QWidget(storagemg);
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

        tb_record = new QTableView(storagemg);
        tb_record->setObjectName("tb_record");

        gridLayout_2->addWidget(tb_record, 2, 0, 1, 1);


        retranslateUi(storagemg);

        QMetaObject::connectSlotsByName(storagemg);
    } // setupUi

    void retranslateUi(QWidget *storagemg)
    {
        storagemg->setWindowTitle(QCoreApplication::translate("storagemg", "Form", nullptr));
        lb_title->setText(QCoreApplication::translate("storagemg", "\350\264\247\347\211\251\344\277\241\346\201\257\346\237\245\350\257\242", nullptr));
        label->setText(QCoreApplication::translate("storagemg", "\346\220\234\347\264\242", nullptr));
        btn_confirm->setText(QCoreApplication::translate("storagemg", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class storagemg: public Ui_storagemg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STORAGEMG_H

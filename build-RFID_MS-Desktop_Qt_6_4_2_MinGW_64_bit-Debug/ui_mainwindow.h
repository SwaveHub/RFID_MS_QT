/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QStackedWidget *stackedWidget;
    QWidget *tool;
    QGridLayout *gridLayout;
    QPushButton *btn_admin;
    QSpacerItem *verticalSpacer;
    QPushButton *btn_record;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QComboBox *port_choose;
    QRadioButton *rbtn_connect;
    QLabel *label;
    QButtonGroup *buttonGroup;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(850, 550);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName("gridLayout_3");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");

        gridLayout_3->addWidget(stackedWidget, 0, 1, 2, 1);

        tool = new QWidget(centralwidget);
        tool->setObjectName("tool");
        tool->setMinimumSize(QSize(120, 0));
        gridLayout = new QGridLayout(tool);
        gridLayout->setObjectName("gridLayout");
        btn_admin = new QPushButton(tool);
        buttonGroup = new QButtonGroup(MainWindow);
        buttonGroup->setObjectName("buttonGroup");
        buttonGroup->addButton(btn_admin);
        btn_admin->setObjectName("btn_admin");
        QFont font;
        font.setPointSize(14);
        btn_admin->setFont(font);

        gridLayout->addWidget(btn_admin, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);

        btn_record = new QPushButton(tool);
        buttonGroup->addButton(btn_record);
        btn_record->setObjectName("btn_record");
        btn_record->setFont(font);

        gridLayout->addWidget(btn_record, 2, 0, 1, 1);

        widget = new QWidget(tool);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(120, 0));
        QFont font1;
        font1.setPointSize(9);
        widget->setFont(font1);
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName("gridLayout_2");
        port_choose = new QComboBox(widget);
        port_choose->setObjectName("port_choose");

        gridLayout_2->addWidget(port_choose, 1, 0, 1, 1);

        rbtn_connect = new QRadioButton(widget);
        rbtn_connect->setObjectName("rbtn_connect");
        QFont font2;
        font2.setPointSize(11);
        rbtn_connect->setFont(font2);
        rbtn_connect->setLayoutDirection(Qt::LeftToRight);

        gridLayout_2->addWidget(rbtn_connect, 2, 0, 1, 1);

        label = new QLabel(widget);
        label->setObjectName("label");
        label->setFont(font2);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 1, 1);


        gridLayout_3->addWidget(tool, 0, 0, 2, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btn_admin->setText(QCoreApplication::translate("MainWindow", "\346\235\203\351\231\220\347\256\241\347\220\206", nullptr));
        btn_record->setText(QCoreApplication::translate("MainWindow", "\345\272\223\345\255\230\347\256\241\347\220\206", nullptr));
        rbtn_connect->setText(QCoreApplication::translate("MainWindow", "\350\277\236\346\216\245\344\270\262\345\217\243", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\344\270\262\345\217\243\351\200\211\346\213\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

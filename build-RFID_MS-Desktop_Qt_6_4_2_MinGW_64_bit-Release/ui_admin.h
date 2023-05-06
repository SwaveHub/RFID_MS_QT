/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin
{
public:
    QGridLayout *gridLayout_3;
    QLabel *lb_title;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QWidget *input;
    QGridLayout *gridLayout;
    QLineEdit *ed_username;
    QLabel *lb_user;
    QLineEdit *ed_password;
    QLabel *lb_pwd;
    QLineEdit *ed_permit;
    QLabel *lb_permit;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QPushButton *btn_logout;
    QPushButton *btn_login;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *admin)
    {
        if (admin->objectName().isEmpty())
            admin->setObjectName("admin");
        admin->resize(700, 500);
        admin->setMinimumSize(QSize(700, 500));
        gridLayout_3 = new QGridLayout(admin);
        gridLayout_3->setObjectName("gridLayout_3");
        lb_title = new QLabel(admin);
        lb_title->setObjectName("lb_title");
        QFont font;
        font.setPointSize(11);
        lb_title->setFont(font);

        gridLayout_3->addWidget(lb_title, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 113, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(179, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 2, 0, 1, 1);

        input = new QWidget(admin);
        input->setObjectName("input");
        input->setMinimumSize(QSize(300, 100));
        gridLayout = new QGridLayout(input);
        gridLayout->setObjectName("gridLayout");
        ed_username = new QLineEdit(input);
        ed_username->setObjectName("ed_username");
        ed_username->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(ed_username, 0, 1, 1, 1);

        lb_user = new QLabel(input);
        lb_user->setObjectName("lb_user");
        QFont font1;
        font1.setPointSize(15);
        lb_user->setFont(font1);
        lb_user->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lb_user, 0, 0, 1, 1);

        ed_password = new QLineEdit(input);
        ed_password->setObjectName("ed_password");
        ed_password->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(ed_password, 1, 1, 1, 1);

        lb_pwd = new QLabel(input);
        lb_pwd->setObjectName("lb_pwd");
        lb_pwd->setFont(font1);
        lb_pwd->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lb_pwd, 1, 0, 1, 1);

        ed_permit = new QLineEdit(input);
        ed_permit->setObjectName("ed_permit");
        ed_permit->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(ed_permit, 3, 1, 1, 1);

        lb_permit = new QLabel(input);
        lb_permit->setObjectName("lb_permit");
        lb_permit->setFont(font1);
        lb_permit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lb_permit, 3, 0, 1, 1);

        widget = new QWidget(input);
        widget->setObjectName("widget");
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName("gridLayout_2");
        btn_logout = new QPushButton(widget);
        btn_logout->setObjectName("btn_logout");
        btn_logout->setFont(font1);

        gridLayout_2->addWidget(btn_logout, 0, 1, 1, 1);

        btn_login = new QPushButton(widget);
        btn_login->setObjectName("btn_login");
        btn_login->setFont(font1);

        gridLayout_2->addWidget(btn_login, 0, 0, 1, 1);


        gridLayout->addWidget(widget, 4, 0, 1, 2);


        gridLayout_3->addWidget(input, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(179, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 2, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 113, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 3, 1, 1, 1);


        retranslateUi(admin);

        QMetaObject::connectSlotsByName(admin);
    } // setupUi

    void retranslateUi(QWidget *admin)
    {
        admin->setWindowTitle(QCoreApplication::translate("admin", "Form", nullptr));
        lb_title->setText(QCoreApplication::translate("admin", "\347\224\250\346\210\267\346\235\203\351\231\220\347\256\241\347\220\206", nullptr));
        lb_user->setText(QCoreApplication::translate("admin", "\347\224\250\346\210\267\357\274\232", nullptr));
        lb_pwd->setText(QCoreApplication::translate("admin", "\345\257\206\347\240\201\357\274\232", nullptr));
        lb_permit->setText(QCoreApplication::translate("admin", "\346\235\203\351\231\220\357\274\232", nullptr));
        btn_logout->setText(QCoreApplication::translate("admin", "\346\263\250\351\224\200", nullptr));
        btn_login->setText(QCoreApplication::translate("admin", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin: public Ui_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H

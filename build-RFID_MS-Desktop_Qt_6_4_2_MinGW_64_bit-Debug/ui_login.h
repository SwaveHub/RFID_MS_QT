/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QLabel *lb_title;
    QPushButton *btn_login;
    QWidget *input;
    QGridLayout *gridLayout;
    QLabel *lb_user;
    QLineEdit *ed_username;
    QLabel *lb_pwd;
    QLineEdit *ed_password;
    QLabel *lb_usericon;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName("login");
        login->setEnabled(true);
        login->resize(600, 400);
        login->setMinimumSize(QSize(600, 400));
        login->setMaximumSize(QSize(600, 400));
        login->setAutoFillBackground(false);
        login->setSizeGripEnabled(false);
        lb_title = new QLabel(login);
        lb_title->setObjectName("lb_title");
        lb_title->setGeometry(QRect(190, 10, 220, 70));
        QFont font;
        font.setPointSize(20);
        lb_title->setFont(font);
        lb_title->setAlignment(Qt::AlignCenter);
        btn_login = new QPushButton(login);
        btn_login->setObjectName("btn_login");
        btn_login->setGeometry(QRect(260, 320, 80, 40));
        QFont font1;
        font1.setPointSize(15);
        btn_login->setFont(font1);
        input = new QWidget(login);
        input->setObjectName("input");
        input->setGeometry(QRect(150, 190, 300, 120));
        input->setMinimumSize(QSize(300, 100));
        gridLayout = new QGridLayout(input);
        gridLayout->setObjectName("gridLayout");
        lb_user = new QLabel(input);
        lb_user->setObjectName("lb_user");
        lb_user->setFont(font1);
        lb_user->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lb_user, 0, 0, 1, 1);

        ed_username = new QLineEdit(input);
        ed_username->setObjectName("ed_username");
        ed_username->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(ed_username, 0, 1, 1, 1);

        lb_pwd = new QLabel(input);
        lb_pwd->setObjectName("lb_pwd");
        lb_pwd->setFont(font1);
        lb_pwd->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lb_pwd, 1, 0, 1, 1);

        ed_password = new QLineEdit(input);
        ed_password->setObjectName("ed_password");
        ed_password->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(ed_password, 1, 1, 1, 1);

        lb_usericon = new QLabel(login);
        lb_usericon->setObjectName("lb_usericon");
        lb_usericon->setGeometry(QRect(240, 85, 120, 120));
        lb_usericon->setStyleSheet(QString::fromUtf8("border-image: url(:/img/user_icon.svg);"));

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "login", nullptr));
        lb_title->setText(QCoreApplication::translate("login", "\350\264\247\347\211\251\344\273\223\345\202\250\347\263\273\347\273\237", nullptr));
        btn_login->setText(QCoreApplication::translate("login", "\347\231\273\345\275\225", nullptr));
        lb_user->setText(QCoreApplication::translate("login", "\347\224\250\346\210\267\357\274\232", nullptr));
        lb_pwd->setText(QCoreApplication::translate("login", "\345\257\206\347\240\201\357\274\232", nullptr));
        lb_usericon->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H

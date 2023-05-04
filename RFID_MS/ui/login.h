#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class login; }
QT_END_NAMESPACE

class login : public QDialog
{
    Q_OBJECT

public:
    login(QWidget *parent = nullptr);
    ~login();

    static void permitInit();
    static bool isPermit(int shelf);
private slots:
    void on_btn_login_clicked();

private:
    Ui::login *ui;
};

extern bool permitmap[1024];
extern QString gusername;
extern QString gpassword;
#endif // LOGIN_H

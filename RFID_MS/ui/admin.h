#ifndef ADMIN_H
#define ADMIN_H

#include <QWidget>

namespace Ui {
class admin;
}

class admin : public QWidget
{
    Q_OBJECT

public:
    explicit admin(QWidget *parent = nullptr);
    ~admin();

private slots:
    void on_btn_login_clicked();

    void on_btn_logout_clicked();

private:
    Ui::admin *ui;
};

#endif // ADMIN_H

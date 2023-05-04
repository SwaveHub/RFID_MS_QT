#ifndef RECORD_H
#define RECORD_H

#include <QWidget>
#include <QStandardItemModel>

namespace Ui {
class record;
}

class record : public QWidget
{
    Q_OBJECT

public:
    explicit record(QWidget *parent = nullptr);
    ~record();

private slots:
    void on_btn_confirm_clicked();

    void on_ed_search_returnPressed();

private:
    Ui::record *ui;
    QStandardItemModel recordModel;
};

#endif // RECORD_H

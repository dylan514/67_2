#ifndef ADDNEW_H
#define ADDNEW_H

#include <QWidget>

namespace Ui {
class Addnew;
}

class Addnew : public QWidget
{
    Q_OBJECT

signals:
    void homed();

public:
    explicit Addnew(QWidget *parent = nullptr);
    ~Addnew();
    int hot;
    int coriander;

    QPixmap currentpic;
    QString imagepath;

private slots:
    void on_ok_button_clicked();

    void on_cancel_button_clicked();

    void on_checkBox_stateChanged(int arg1);

    void on_in_hot_slider_valueChanged(int value);

    void on_selectpic_button_clicked();

protected:
    void homeEvent(){
        close();
        emit homed();
    }

private:
    Ui::Addnew *ui;
};

#endif // ADDNEW_H

#ifndef SETPAGE_H
#define SETPAGE_H

#include <QWidget>

namespace Ui {
class SetPage;
}

class SetPage : public QWidget
{
    Q_OBJECT

signals:
    void homed();

public:
    explicit SetPage(QWidget *parent = nullptr);
    ~SetPage();
    int hot_weight;
    bool coriander;

private:
    Ui::SetPage *ui;

protected:
    void homeEvent(){
        close();
        emit homed();
    }
private slots:
    void on_pushButton_clicked();
    void on_addnew_button_clicked();
};

#endif // SETPAGE_H

#ifndef DISTANCE_H
#define DISTANCE_H

#include <QWidget>
#include <QMessageBox>
#include <QCloseEvent>
#include <QString>
#include"meals.h"
namespace Ui {
class distance;
}

class distance : public QWidget
{
    Q_OBJECT
public slots:
    void reshow();
public:
    explicit distance(std::vector<Meals>& meal_group,QWidget *parent = nullptr);
    ~distance();
    std::vector<Meals>* MMMeal;

private:
    Ui::distance *ui;
    int X_me,Y_me;
signals:
    void homed();
protected:
    void homeEvent(){
        close();
        emit homed();
    }
private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_comboBox_activated(int index);
    //void on_comboBox_textActivated(const QString &arg1);
};

#endif // DISTANCE_H

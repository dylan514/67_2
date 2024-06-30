#ifndef STARTPAGE_H
#define STARTPAGE_H

#include <QWidget>
#include <QMessageBox>
#include <QCloseEvent>
#include "models.h"
#include "meals.h"
#include "boom.h"

namespace Ui {
class StartPage;
}


class StartPage : public QWidget
{
    Q_OBJECT

signals:
    void homed();
friend Meals;
friend Models;
public:
explicit StartPage(QWidget *parent = nullptr);
    ~StartPage();
    int distance_weight;
    int price_weight;
    int protein_weight;
    int carbo_weight;
    int fat_weight;
    int hot_weight;
    bool coriander;


private slots:
    void on_home_clicked();

    void on_premodel_box_currentIndexChanged(int index);

    void on_savemodel_button_clicked();

    void on_coriander_box_stateChanged(int arg1);

    void on_roller_clicked();

    void on_pushButton_clicked();

private:
    Ui::StartPage *ui;

protected:
    void homeEvent(){
        close();
        emit homed();
    }
};


#endif // STARTPAGE_H

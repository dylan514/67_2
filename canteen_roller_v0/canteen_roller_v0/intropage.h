#ifndef INTROPAGE_H
#define INTROPAGE_H

#include <QWidget>

namespace Ui {
class IntroPage;
}

class IntroPage : public QWidget
{
    Q_OBJECT

signals:
    void homed();

public:
    explicit IntroPage(QWidget *parent = nullptr);
    ~IntroPage();

private:
    Ui::IntroPage *ui;

private slots:
    void on_pushButton_clicked();

protected:
    void homeEvent(){
        close();
        emit homed();
    }
};

#endif // INTROPAGE_H

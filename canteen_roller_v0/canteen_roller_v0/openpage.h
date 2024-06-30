#ifndef OPENPAGE_H
#define OPENPAGE_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class OpenPage;
}
QT_END_NAMESPACE

class OpenPage : public QWidget
{
    Q_OBJECT

public:
    OpenPage(QWidget *parent = nullptr);
    ~OpenPage();

public slots:
    void reshow();

private slots:
    void on_begin_button_clicked();

    void on_set_button_clicked();

    void on_record_button_clicked();

    void on_intro_button_clicked();
signals:
    void homed();
private:
    Ui::OpenPage *ui;
};
#endif // OPENPAGE_H

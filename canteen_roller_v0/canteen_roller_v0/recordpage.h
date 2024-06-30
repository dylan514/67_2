#ifndef RECORDPAGE_H
#define RECORDPAGE_H

#include <QWidget>

namespace Ui {
class RecordPage;
}

class RecordPage : public QWidget
{
    Q_OBJECT

signals:
    void homed();

public:
    explicit RecordPage(QWidget *parent = nullptr);
    ~RecordPage();

private:
    Ui::RecordPage *ui;

protected:
    void homeEvent(){
        close();
        emit homed();
    }
private slots:
    void on_pushButton_clicked();
};

#endif // RECORDPAGE_H

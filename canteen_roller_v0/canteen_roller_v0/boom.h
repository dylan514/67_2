#ifndef BOOM_H
#define BOOM_H

#include <QWidget>
#include "meals.h"

namespace Ui {
class BOOM;
}

class BOOM : public QWidget
{
    Q_OBJECT

public:
    explicit BOOM(Meals meal,QWidget *parent = nullptr);
    ~BOOM();

private:
    Ui::BOOM *ui;
};

#endif // BOOM_H

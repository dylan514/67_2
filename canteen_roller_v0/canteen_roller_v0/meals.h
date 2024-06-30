#ifndef MEALS_H
#define MEALS_H

#include <QWidget>

class Meals
{
public:
    int hot;
    int protein;
    int carbo;
    int fat;
    int price;
    QString canteen;
    bool coriander;
    QString name;
    QString picturepath;
    int distance_to_u=0;
    int x,y;
    Meals(){}
    //meals的构造函数，这里面x和y的信息需要王星运根据自己写的东西修改
    Meals(int h,int pro,int car,int f,int pri,QString cant,bool cori,QString na,QString pic,int dis):hot(h),protein(pro),
        carbo(car),fat(f),price(pri),canteen(cant),coriander(cori),name(na),picturepath(pic),distance_to_u(dis){
        if(cant=="家园食堂")x=3,y=3;
        else if(cant=="学一食堂")x=3,y=2;
        else if(cant=="农园食堂")x=7,y=4;
        else if(cant=="学五食堂")x=2,y=4;
        else if(cant=="勺园食堂")x=1,y=7;
        else if(cant=="佟园食堂")x=2,y=6;
        else if(cant=="燕南食堂")x=3,y=5;
        else if(cant=="外卖")x=10,y=10;
    }
    //调用这个函数修改菜品到你的距离distance_to_u
    void change_dis(int distances){
        distance_to_u=distances;
        return;
    }
};

#endif // MEALS_H

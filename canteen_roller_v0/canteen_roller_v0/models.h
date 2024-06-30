#ifndef MODELS_H
#define MODELS_H

#include "qwidget.h"

class Models{
public:
    int distance_weight;
    int price_weight;
    int protein_weight;
    int carbo_weight;
    int fat_weight;
    int hot_limit;
    bool coriander_acc;
    QString model_name;
    Models(int d,int p,int pro,int c,int f,int h,bool cor,QString mnm):distance_weight(d),price_weight(p),
        protein_weight(pro),carbo_weight(c),fat_weight(f),hot_limit(h),coriander_acc(cor),model_name(mnm){}
    Models(const Models& m){
        distance_weight = m.distance_weight;
        price_weight = m.price_weight;
        protein_weight = m.protein_weight;
        carbo_weight = m.carbo_weight;
        fat_weight = m.fat_weight;
        hot_limit = m.hot_limit;
        coriander_acc = m.coriander_acc;
        model_name = m.model_name;
    }
    bool operator==(const Models m){
        return (hot_limit==m.hot_limit)&&(coriander_acc==m.coriander_acc)&&
               (distance_weight==m.distance_weight)&&(price_weight==m.price_weight)&&
               (protein_weight==m.protein_weight)&&(carbo_weight==m.carbo_weight)&&(fat_weight==m.fat_weight)&&(model_name==m.model_name);
    }
    Models(){}
};


#endif // MODELS_H

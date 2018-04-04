#ifndef STRUCT_H_INCLUDED
#define STRUCT_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
typedef enum _proptype{         //道具类型
    weapon,bujia

}Proptype;
typedef struct _prop{
    int id;//道具编号
    char name[20];//道具名称
    int num;//道具现存数量
    Proptype type;
    union{
        int minattack;
        int minfangyu;
    };
    union{
        int maxattack;
        int maxfangyu;

    };
    char dec[100];
}Prop;
    void input();
    void show();

#endif // STRUCT_H_INCLUDED

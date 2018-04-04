#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
typedef struct _map{        //地图
    int id;
    char name[20];
    COORD coord;
    char dec[100];
}Map;
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
    void SetPosition(int,int);//光标位置
    void SetColor(int foreColor,int backColor);//更改显示文字颜色
    void SetTitle(char *title);//控制台窗口标题
    void showwelcome();
    void showmap();
    void mapinfor();
    void menu();

#endif // GAME_H_INCLUDED

#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
typedef struct _map{        //��ͼ
    int id;
    char name[20];
    COORD coord;
    char dec[100];
}Map;
typedef enum _proptype{         //��������
    weapon,bujia

}Proptype;
typedef struct _prop{
    int id;//���߱��
    char name[20];//��������
    int num;//�����ִ�����
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
    void SetPosition(int,int);//���λ��
    void SetColor(int foreColor,int backColor);//������ʾ������ɫ
    void SetTitle(char *title);//����̨���ڱ���
    void showwelcome();
    void showmap();
    void mapinfor();
    void menu();

#endif // GAME_H_INCLUDED

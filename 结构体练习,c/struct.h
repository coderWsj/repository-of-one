#ifndef STRUCT_H_INCLUDED
#define STRUCT_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
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
    void input();
    void show();

#endif // STRUCT_H_INCLUDED

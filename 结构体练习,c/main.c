#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include"game.h"
int main()
{    extern int X,Y;
     char key;
     SetColor(13,0);
    SetTitle("欢迎来到游戏的世界");
     showwelcome();
     showmap();
     mapinfor();
     menu();
while(1){
        fflush(stdin);
        key = getch();
        fflush(stdin);
        if(key==38||key==72)Y--;
        else if(key==77||key==39)X++;
        else if(key==80||key==40)Y++;
        else if(key==75||key==37)X--;
        if(X>7)X=0;
        if(X<0)X=7;
        if(Y>7)Y=0;
        if(Y<0)Y=7;
        showmap();
        menu();
    }
    return 0;
}

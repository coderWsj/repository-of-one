#include"game.h"
#define left 20
#define string "--------------------------------------------------------------------------"
#define right 93
int X=3,Y=2;
void SetPosition(int x,int y){
    HANDLE winHandle;
    winHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos={x,y};
    SetConsoleCursorPosition(winHandle,pos);
}
void SetColor(int foreColor,int backColor){
    HANDLE winHandle;
    winHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(winHandle,foreColor+backColor * 0x10);
 }
Prop proparray[] ={
{
    1,"无尽之刃",100,weapon,.minattack=100,.maxattack=120,"加百分之20的暴击几率，暴击效果提升百分之50"
},
{
    2,"荆棘之甲",80,bujia,.minfangyu=100,.maxfangyu=150,"将所受伤害的百分之30以法术伤害返回"
},
};
void SetTitle(char *title){  //控制台标题
    SetConsoleTitle(title);
}
void showwelcome(){     //显示最上面游戏名称
  SetPosition(left,0);
  printf("%s",string);
  SetPosition(left,1);
  printf("|");
  SetPosition(left+30,1);
  printf("我的第一个小程序");
  SetPosition(right,1);
  printf("|");
  SetPosition(left,2);
   printf("%s",string);
  }
 void  showmap(){  //显示地图
       int i,j;

     /*  int count=sizeof(proparray)/sizeof(Prop);
       for(i=0;i<count;i++)
        {
        printf("%d\t%s\t%d\t",proparray[i].id,proparray[i].name,proparray[i].num);
        switch(proparray[i].type){
         case weapon:  printf("%d-%d\t%s\n",proparray[i].minattack,proparray[i].maxattack,proparray[i].dec); break;
         case bujia:   printf("%d-%d\t%s\n",proparray[i].minfangyu,proparray[i].maxfangyu,proparray[i].dec);break;
        }
        }
        printf("打印地图信息\n");*/
Map maparray[8][8]={
        {
            {1,"天山",{0,0},"非常美丽的山"},{2,"楼兰",{0,1},"非常美丽的山"},
            {3,"白驼山",{2,0},"非常美丽的山"},{3,"野猪林",{3,0},"非常美丽的山"},
            {4,"水晶洞",{4,0},"非常美丽的山"},{5,"天残洞",{5,0},"非常美丽的山"},
            {6,"黑风寨",{6,0},"非常美丽的山"},{7,"冰火岛",{7,0},"非常美丽的山"}
        },
          {
            {1,"迷宫",{0,0},"非常美丽的山"},{1,"凌霄城",{1,0},"非常美丽的山"},
            {1,"轩辕岭",{2,0},"非常美丽的山"},{1,"华山",{3,0},"非常美丽的山"},
            {1,"黑山",{4,0},"非常美丽的山"},{1,"紫禁城",{5,0},"非常美丽的山"},
            {1,"快活林",{6,0},"非常美丽的山"},{1,"神龙岛",{7,0},"非常美丽的山"}
        },
          {
            {1,"西城",{0,0},"非常美丽的山"},{1,"葫芦谷",{1,0},"非常美丽的山"},
            {1,"唐门",{2,0},"非常美丽的山"},{1,"钟南山",{3,0},"非常美丽的山"},
            {1,"石窟",{4,0},"非常美丽的山"},{1,"客栈",{5,0},"非常美丽的山"},
            {1,"玉皇岭",{6,0},"非常美丽的山"},{1,"灵蛇岛",{7,0},"非常美丽的山"}
        },
          {
            {1,"光明顶",{0,0},"非常美丽的山"},{1,"摩天崖",{1,0},"非常美丽的山"},
            {1,"聚贤庄",{2,0},"非常美丽的山"},{1,"后山",{3,0},"非常美丽的山"},
            {1,"武当山",{4,0},"非常美丽的山"},{1,"开封府",{5,0},"非常美丽的山"},
            {1,"二十四桥",{6,0},"非常美丽的山"},{1,"蓬莱仙境",{7,0},"非常美丽的山"}
        },
          {
            {1,"擂鼓山",{0,0},"非常美丽的山"},{1,"峨眉山",{1,0},"非常美丽的山"},
            {1,"迷踪林",{2,0},"非常美丽的山"},{1,"五虎岭",{3,0},"非常美丽的山"},
            {1,"天宁寺",{4,0},"非常美丽的山"},{1,"积善堂",{5,0},"非常美丽的山"},
            {1,"镇江府",{6,0},"非常美丽的山"},{1,"桃花岛",{7,0},"非常美丽的山"}
        },
          {
            {1,"恶人谷",{0,0},"非常美丽的山"},{1,"大理",{1,0},"非常美丽的山"},
            {1,"百花谷",{2,0},"非常美丽的山"},{1,"孔雀山庄",{3,0},"非常美丽的山"},
            {1,"五霸岗",{4,0},"非常美丽的山"},{1,"万仞堂",{5,0},"非常美丽的山"},
            {1,"千年古刹",{6,0},"非常美丽的山"},{1,"六合塔",{7,0},"非常美丽的山"}
        },
          {
            {1,"玩偶庄",{0,0},"非常美丽的山"},{1,"黑木崖",{1,0},"非常美丽的山"},
            {1,"蝴蝶谷",{2,0},"非常美丽的山"},{1,"铁花碧",{3,0},"非常美丽的山"},
            {1,"霹雳堂",{4,0},"非常美丽的山"},{1,"关帝庙",{5,0},"非常美丽的山"},
            {1,"麒麟庄",{6,0},"非常美丽的山"},{1,"销魂宫",{7,0},"非常美丽的山"}
        },
          {
            {1,"石府",{0,0},"非常美丽的山"},{1,"金三角",{1,0},"非常美丽的山"},
            {1,"忏悔崖",{2,0},"非常美丽的山"},{1,"通吃岛",{3,0},"非常美丽的山"},
            {1,"通天观",{4,0},"非常美丽的山"},{1,"紫霞亭",{5,0},"非常美丽的山"},
            {1,"天弃庵",{6,0},"非常美丽的山"},{1,"侠客岛",{7,0},"非常美丽的山"}
        }
        };
    for(i=0;i<8;i++){
       SetPosition(left,3+i);
       printf("|");
    for(j=0;j<8;j++)
        {
        if(X==j && Y==i)
        {
            SetColor(7,1);
        }
          printf("%-9s",maparray[i][j].name);
        SetColor(13,0);
        }
        printf("|");
       }
    SetPosition(left,11);
    printf("%s",string);
}
void mapinfor(){//地图具体信息的实现
    int i;
    for(i=0;i<9;i++){
         SetPosition(left,12+i);
         printf("|");
         SetPosition(right,12+i);
           printf("|");
    }
    SetPosition(left,12+i);
    printf("%s",string);
}
void menu(){//菜单信息
    SetPosition(left,22);
    printf("1,自我欣赏");
    SetPosition(left,23);
    printf("2,返回总舵");
    printf("请输入方向键：");
 }

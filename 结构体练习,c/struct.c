#include"struct.h"
Prop proparray[]{
{
    1,"无尽之刃"，100，weapon,.minattack=100,.maxattack=120,"加百分之20的暴击几率，暴击效果提升百分之50"
}
{
    2,“荆棘之甲”，80，bujia,.minfangyu=100,.maxfangyu=150,"将所受伤害的百分之30以法术伤害返回",
}
}
   input(){
       int i;
       int count=sizeof(proparray)/sizeof(Prop);
       for(i=0;i<count;i++)
        {
        printf("%d\t%s\t%d\t",proparray[i].id,proparray[i].name,proparray[i].num);
        switch(proparray[i].type){
         case weapon:  printf("%d-%d\t%s",proparray[i].minattack,proparray[i].maxattack,proparray[i].dec);berak;
         case bujia:   printf("%d-%d\t%s",proparray[i].minfangyu,proparray[i].maxfangyu,proparray[i].dec);berak;
        }

        }



}

#include"struct.h"
Prop proparray[]{
{
    1,"�޾�֮��"��100��weapon,.minattack=100,.maxattack=120,"�Ӱٷ�֮20�ı������ʣ�����Ч�������ٷ�֮50"
}
{
    2,������֮�ס���80��bujia,.minfangyu=100,.maxfangyu=150,"�������˺��İٷ�֮30�Է����˺�����",
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

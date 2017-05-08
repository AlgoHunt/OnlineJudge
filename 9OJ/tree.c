#include<stdio.h>
#include<string.h>
#define ISYEAP(x) x%100 !=0 && x%4 == 0 || x%400 ==0?1:0

int dayOfMonth[13][2]={
0,0,
31,31,
28,29,
31,31,
30,30,
31,31,
30,30,
31,31,
31,31,
30,30,
31,31,
30,30,
31,31,
};

typedef struct Date{
int Day;
int Month;
int Year;
}Date;

void nextDay(Date *D){
D->Day++;
if(D->Day>dayOfMonth[D->Month][ISYEAP(D->Year)]){
    D->Day = 1;
    D->Month ++;
    if(D->Month>12){
        D->Month = 1;
        D->Year++;
    }

}

}

int main(){
Date tmp,*ptmp;
ptmp = &tmp;
tmp.Day = 11;
tmp.Month = 3;
tmp.Year =2017;
while(tmp.Year!=2018 ){
    printf("%d %d %d\n",tmp.Year,tmp.Month,tmp.Day);
    nextDay(ptmp);
}

return 0;
}



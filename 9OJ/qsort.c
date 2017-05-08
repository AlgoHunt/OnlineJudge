#include<stdio.h>
#include<stdlib.h>
//#include<algorithm>
//using namespace std;

int cmp (const void *x,const void* y){
return *(int*)x-*(int*)y;
}

struct Date{
int Day;
int Month;
int Year;

void nextDay(){
    Day++;
    if(Day>dayOfMonth[Month][ISYEAP(Year)]){
        Day = 1;
        Month++;
        if(Month>12){
            Month = 1;
            Year ++;

        }

    }
}
};

int main(){
int n,i;
int buf[100];
while (scanf("%d",&n)!=EOF){
    for(i=0;i<n;i++){
        scanf("%d",&buf[i]);
        }
    qsort(buf,n,sizeof(buf[0]),cmp);
    for(i = 0;i<n;i++){
        printf(" %d ",buf[i]);
        }
    printf("\n");
    }
return 0;
}

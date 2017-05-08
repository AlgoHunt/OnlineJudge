#include<stdio.h>
#include <limits.h>

int main(){
long long m,a,b;
long long  num;
char ans[100];
//printf("int最大值:%d\t最小值:%d\n", LONG_MAX, LONG_MIN);
while(scanf("%lld",&m)!=EOF){
    if(m==0) break;
    scanf("%lld %lld",&a,&b);
   // printf("a:%lld b%lld",a,b);
    num=a+b;
 //   printf("num:%lld\n",num);
    int i=0;
    a=0;
    while(num>0){
        a=num%m;
        ans[i]=a+'0';
       // printf("num:%lld\n",num);
        num=(num-a)/m;
        i++;

    }
 while(i>0){
 i--;
 putchar(ans[i]);
 }
 printf("\n");
}
//printf("\n");

return 0;
}

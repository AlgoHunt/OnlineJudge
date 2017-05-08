#include<stdio.h>

int main(){
int a,b,i,ans;
while(scanf("%d %d",&a,&b)!=EOF){
    if(a==0&&b==0) return 1;
    a=a%1000;
    ans=a;
    //printf("%d\n",a);
    for(i=1;i<b;i++){
        ans*=a;
        ans=ans%1000;
   // printf("in: %d\n",a);
    }
    printf("%d\n",ans);
}
return 0;
}

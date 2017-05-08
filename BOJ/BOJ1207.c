#include<stdio.h>

int clength(int a){
int ans=0;
while(a!=1){
    if (a%2==1) a=3*a+1;
    else a/=2;
   // printf("ans is:%d a is :%d\n",ans,a);
    ans++;
}
return ans+1;
}

int main(){
int a,b,i,j,ans;
//printf("start\n");
   // ans=clength(22);
  //  printf("%d\n",a);
while(scanf("%d %d",&a,&b)!=EOF){

    ans=0;
    j=0;

    if(a>b) {
        for(i=b;i<=a;i++){
            j=clength(i);
            if (j>ans) ans=j;
        }
    }
    else if(a<b) {
        for(i=a;i<=b;i++){
            j=clength(i);
         //   printf("j is %d",j);
            if (j>ans) ans=j;
        }
    }
    else if (a==b) ans=clength(a);
    printf("%d %d %d\n",a,b,ans);
}


return 0;
}

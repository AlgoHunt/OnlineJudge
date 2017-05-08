#include<stdio.h>
int prime[10001];
int primeSize;
int mark[10001]={0};

void init(){
int i,j;
primeSize =0 ;
for(i=2;i<10001;i++){
    if(mark[i]==1) continue;
    prime[primeSize++] = i;
    for(j=i*i;j<=10001;j+=i){
        mark[j] = 1;
    }
}
}

int main(){
int num,i,ans=0;
init();
//printf("primeSize:%d\n",primeSize);
while (scanf("%d",&num)!=EOF){
  // i=0;
   // while(i<primeSize){printf("%d\n",prime[i++]);}
    i=0;
    ans =0;
   // printf("num: %d\n",num);
    while(i<primeSize){
        if (num%prime[i]!=0) {i++;continue;}
 //   printf("第 %d 个质因子是 %d\n",ans+1,prime[i]);
    ans++;
    num/=prime[i];
    if (num==1) break;
    }
    if (num!=1) ans++;
    printf("%d\n",ans);
}


return 0;
}

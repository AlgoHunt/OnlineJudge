#include<stdio.h>
long long ans[21];

int main(){
int n;
ans[2]=1;
for(int i=3;i<=20;i++){
    ans[i]=ans[i-1]*(i-1)+ans[i-2]*(i-1);
    //printf("%lld\n",ans[i]);
}
while (scanf("%d",&n)!=EOF){
    printf("%lld\n",ans[n]);

}

}

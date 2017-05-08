#include<stdio.h>


int dp[2001];

int main(){
int k,n;dp[1]=1;
while(scanf("%d %d",&k,&n)!=EOF){
   // dp[2]=2%n;
    //printf("1\n");
    for(int i=1;i<n;i++){
        dp[1]=i;
        for(int j=2;j<=k;j++)
        {
        if(j%2==0) {dp[j]=(dp[j/2]*dp[j/2])%n;}
        else if(j%2==1) {dp[j]=(dp[j/2]*dp[(j/2)+1])%n;}

        }
    if (dp[k]==1) printf("%d\n",i);
    }

}

return 0;
}

#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

struct item{
int w;
int v;
}iList[101];
int dp[1001];

//int MAX(int a,int b){return a>b?a:b;}

int main(){
int t,m;
//freopen("9OJ1123.txt","r",stdin);
while(cin>>t>>m){
    for(int i=1;i<=m;i++){
        cin>>iList[i].w>>iList[i].v;
    }
    for(int i=0;i<=t;i++){
        dp[i]=0;
    }
    for(int i=1;i<=m;i++){
        for(int j=t;j>=iList[i].w;j--){
                dp[j]=max(dp[j],dp[j-iList[i].w]+iList[i].v);
        }
    }
    cout<<dp[t]<<endl;
}
return 0;
}

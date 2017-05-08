#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

int gcd(int a,int b){
    if(a==0||b==0) return a+b;
    else if(a>b) return gcd(a-b,b);
    else return gcd(a,b-a);
}


int main(){
int n;
int ans[600],num;
while(scanf("%d",&n)!=EOF){
    if(n==0) break;
    num=0;
    for(int i=0;i<n;i++){
        scanf("%d",&ans[i]);
    }
sort(ans,ans+n);
for(int i=1;i<n;i++){
    for(int j=0;j<i;j++){
        if(gcd(ans[i],ans[j])==1) {
           // printf("find: %d/%d\n",ns[j],ans[i]);
            num++;}
    }
}
printf("%d\n",num);
}

return 0;
}


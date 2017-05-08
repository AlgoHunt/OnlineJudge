#include<stdio.h>
#include<algorithm>
using namespace std;

struct WareHouse{
double J;
double F;
double S;
}buf[1001];

bool cmp(WareHouse a,WareHouse b){
    return a.S>b.S;
}

int main(){
int n,idx,m;
double money,ans;
while(scanf("%d %d",&m,&n)!=EOF){
    if(m == -1 && n == -1) break;
    for(int i= 0;i<n;i++){
        scanf("%lf %lf",&buf[i].J,&buf[i].F);
        buf[i].S=buf[i].J/buf[i].F;
    }
    sort(buf,buf+n,cmp);
   // printf("ÅÅÐòºó\n");
        for(int i=0;i<n;i++){
       // printf("%lf %lf %lf\n",buf[i].J,buf[i].F,buf[i].S);
    }
    money=double (m);
   //printf("money is %.3lf , n is%d:\n",money,n);
    idx = 0;
    ans = 0;
    while(money>0 && idx<n){
        if(money>buf[idx].F){
            ans+=buf[idx].J;
            money-=buf[idx].F;
        }
        else{
            ans+=buf[idx].S*money;
            money=0;
        }
   //   printf("the %dth ans is:%lf\n",idx,ans);
        idx ++;
    }
    printf("%.3lf\n",ans);
}
return 0;

}

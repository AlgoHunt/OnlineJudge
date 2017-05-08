#include<stdio.h>
#include<algorithm>
using namespace std;




struct edge{
int a;
int b;
int weight;
}road[6000];

bool cmp(edge a,edge b){
return a.weight<b.weight;
}

int cityUF[101];

int findRoot(int x){
if(cityUF[x]==-1) {return x;}
else{
    int tmp = findRoot(cityUF[x]);
    cityUF[x] = tmp;
    return tmp;
}

}

void init(){
for(int i=0;i<101;i++){
    cityUF[i]=-1;

}
}

int main(){
int n,ecount,roota,rootb,ans,rcount;
while(scanf("%d",&n)!=EOF){
    init();
    if(n == 0) break;
    ecount =(n*(n-1))/2;
    for(int i=0;i<ecount;i++)
   {scanf("%d %d %d",&road[i].a,&road[i].b,&road[i].weight);}
    sort(road,road+ecount,cmp);
    //for(int i=0;i<ecount;i++)
  // {printf("%d %d %d\n",road[i].a,road[i].b,road[i].weight);}
    ans = 0;
    rcount = 0;
    for(int i=0;i<ecount;i++){
        roota=findRoot(road[i].a);
        rootb=findRoot(road[i].b);
       // printf("the %dth union find roota:%d rootb:%d\n ",i,roota,rootb);
        if(roota!=rootb){
            cityUF[roota]=rootb;
            ans+=road[i].weight;
            rcount++;
         //   printf("第%d次添加道路 a:%d b:%d weight:%d\n",n,road[i].a,road[i].b,road[i].weight);
        }
        if (rcount == n-1) break;
    }
    printf("%d\n",ans);

}


return 0;
}

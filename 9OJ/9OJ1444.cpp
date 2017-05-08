#include<stdio.h>

int unionFind[10000001];

int findRoot(int x){
if (unionFind[x]<0) return x;
else{
    int tmp = findRoot(unionFind[x]);
    unionFind[x]=tmp;
    return tmp;
}
}

void init(){
for(int i=0;i<10000001;i++)
{unionFind[i]=-1;}
}

int main(){
int n,a,b,roota,rootb,ans,tmp;
while(scanf("%d",&n)!=EOF){
    init();
    ans = 0;
    for(int i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        roota=findRoot(a);
        rootb=findRoot(b);
        if(roota!=rootb){
            unionFind[rootb]+=unionFind[roota];
            unionFind[roota]=rootb;
        }
    }
    for(int i=1;i<10000001;i++){
        tmp=unionFind[i];
        ans=(tmp<ans)?tmp:ans;
    }
    printf("%d\n",-ans);

}

return 0;
}

#include<stdio.h>

int Tree[1002];

int findroot(int x){
if (Tree[x]==-1)return x;
else{
    int tmp=findroot(Tree[x]);
    Tree[x] = tmp;
    return tmp;
}
}

void init(){
int i;
for(i=0;i<1002;i++){Tree[i]=-1;}
}


int main(){
int m,n,a,b,roota,rootb,i,ans;

while(scanf("%d",&n)!=EOF){
    ans=0;
    //printf("step 1\n");
    init();
    //printf("step 2\n");
    if(n==0) break;
    scanf("%d",&m);
    for(i=0;i<m;i++){
        scanf("%d %d",&a,&b);
        roota=findroot(a);
        rootb=findroot(b);
        if(roota==rootb)continue;
        Tree[roota]=rootb;
        //printf("roota is:%d rootb is:%d \n",roota,rootb);

    }
    for(i=1;i<=n;i++){
        //printf("%d ",Tree[i]);
        if(Tree[i]==-1) ans++;
    }


    printf("%d\n",ans-1);

}
return 0;
}

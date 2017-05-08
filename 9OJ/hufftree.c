#include <stdio.h>

int weight[1001];

void cmp(const void *a,const void *b){
return *(int*)a-*(int*)b;
}

int weightsum(int weight[],int n){

}

int main(){
int n,i,ans;
while(scanf("%d",&n)!=EOF){
    for(i=0;i<0;i++){
    scanf("%d",&weight[i]);
    }
    qsort(weight,n,sizeof(weight[0]),cmp);
    ans=weightsum(weight,n)

}


}

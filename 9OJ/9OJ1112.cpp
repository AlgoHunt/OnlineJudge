#include<stdio.h>


int main(){
int k;
int buf[26],ans[26];
ans[0]=0;
buf[0]=0;
int trueans;
while(scanf("%d",&k)!=EOF){
    for(int i=1;i<=k;i++){
        scanf("%d",&buf[i]);
        int maxl=1;
        for(int j=0;j<i;j++){
            if(buf[i]<=buf[j])
                maxl=(ans[j]+1>maxl)?ans[j]+1:maxl;
        }
        ans[i]=maxl;
    }
    trueans=1;
    for(int i=1;i<=k;i++){
        trueans = (trueans>ans[i])?trueans:ans[i];
    }

    printf("%d\n",trueans);

}
return 0;
}

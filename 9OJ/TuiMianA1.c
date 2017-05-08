#include<stdio.h>
int a[1001];
int b[1001];
int main(){
int i,j,n,ans;
while(scanf("%d",&n)!=EOF){
    ans=0;
    for(i=0;i<n;i++){scanf("%d",&a[i]);}
    for(i=0;i<n;i++){scanf("%d",&b[i]);}
    for(i=0;i<n;i++){ans+=a[i]*b[i];}
    printf("%d",ans);

}


return 0;
}

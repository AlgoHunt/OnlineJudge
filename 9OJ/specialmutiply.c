#include<stdio.h>

int main(){
int i,j;
long a,b,ans;
int A[12],B[12];
while(scanf("%ld %ld",&a,&b)!=EOF){
     for(j = 0;j<11;j++){
            A[j]=0,B[j]=0;

     }
    i=0;
    ans=0;
    while(a>0){
    A[i++]=a%10;
    a/=10;
    }
    i=0;
    while(b>0){
    B[i++]=b%10;
    b/=10;
    }
        // for(j = 0;j<11;j++){
         //  printf("A[]:%d B[]:%d\n",A[j],B[j]);

     //}
    for(i = 0 ;i<11;i++){
        for(j = 0;j<11;j++){
            ans=ans+(A[i]*B[j]);
           // printf("%ld\n",ans);
        }
    }
printf("%ld\n",ans);
}
return 0;
}

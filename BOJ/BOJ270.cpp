#include<stdio.h>

int main(){
int n;

while(scanf("%d",&n)!=EOF){
if(n%2==1) printf("0 0\n");

else printf("%d %d\n",n/4+(n%4)/2,n/2);

}
return 0;
}

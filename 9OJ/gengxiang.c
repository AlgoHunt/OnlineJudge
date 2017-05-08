#include<stdio.h>


/*int gengxiang(int a,int b){
if(a>b) return gengxiang(b,a-b);
else  if(a<b) return gengxiang(a,b-a);
return a;
}*/

int gcd(int a, int b){
if(b == 0) return a;
else return gcd(b,a%b);
}

int main(){
int a,b;
while (scanf("%d %d",&a,&b)!=0){
    printf("%d\n",gcd(a,b));

}
return 0;
}


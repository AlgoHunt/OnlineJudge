#include<stdio.h>


int main(){
int hight,n;
while(scanf("%d",&hight)!=EOF){
    n=(hight-1)*2+hight;
for(int i=0;i<hight;i++){
    for(int j=n-hight-i*2;j>0;j--){printf(" ");}
    for(int j=0;j<hight+i*2;j++){printf("*");}
    printf("\n");
    }
}

return 0;
}

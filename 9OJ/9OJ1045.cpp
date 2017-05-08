#include<stdio.h>


int main(){
int n;
while(scanf("%d",&n)!=EOF){
    for(int x=0;x<101;x++){
        for(int y=0;y<101;y++){
            for(int z=0;z<101;z++){
                if((x*15+y*9+z<=n*3)&&(x+y+z==100))
                {
                  printf("x=%d,y=%d,z=%d\n",x,y,z);
                }

            }
        }
    }

}

return 0;
}

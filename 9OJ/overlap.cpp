#include<stdio.h>

int main(){
char in,out,draw,tmp;
int length;

while(scanf("%d %c %c",&length,&in,&out)!=EOF){
    char graph[81][81]={' '};
   // printf("length:%d",length);
    if((length+3)%4==0){
    tmp = in;
    in = out;
    out = tmp;
    }
    for(int frame=0;frame<=length/2;frame++){
        if (frame%2==1){draw=in;}
        else {draw=out;}
        for(int j=frame;j<length-frame;j++){graph[frame][j]=draw;}
        for(int j=frame;j<length-frame;j++){graph[length-frame-1][j]=draw;}
        for(int j=frame;j<length-frame;j++){graph[j][frame]=draw;}
        for(int j=frame;j<length-frame;j++){graph[j][length-frame-1]=draw;}
        }
        graph[length-1][0]=' ';
        graph[0][0]=' ';
        graph[0][length-1]=' ';
        graph[length-1][length-1]=' ';
    for(int i=0;i<length;i++){
        for(int j=0;j<length;j++){
            printf("%c",graph[i][j]);
            }
        printf("\n");
        }
   // printf("\n");
    }
return 0;
}

#include<stdio.h>
int ans[91];

int main(){
int N;
ans[1]=1;
ans[2]=2;
for(i = 3;i<91;i++){
    ans[i]=ans[i-1]+ans[i-2];
}

}

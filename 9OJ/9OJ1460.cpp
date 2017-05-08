#include<stdio.h>

char grid[100][100];


int main(){
int m,n;
while(scanf("%d",&m)!=EOF){
    if(m=0) break;
    scanf("%d",&n);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%c",&grid[i][j]);
        }
    getchar();
    }



}

return 0;
}

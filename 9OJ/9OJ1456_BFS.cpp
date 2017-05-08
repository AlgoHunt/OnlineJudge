#include<stdio.h>
#include<queue>
#include<iostream>
using namespace std;

bool mark[50][50][50];
int maze[50][50][50];
struct N{
    int x,y,z;
    int t;
};

queue<N> Q;
int go[6][3]={
1,0,0,
-1,0,0,
0,1,0,
0,-1,0,
0,0,1,
0,0,-1,
};

int BFS(int a,int b,int c){
while (Q.empty()==false){
    N now = Q.front();
    Q.pop();
    for(int i=0;i<6;i++){
        int nx = now.x+go[i][0];
        int ny = now.y+go[i][1];
        int nz = now.z+go[i][2];
        if (nx<0||nx>=a||ny<0||ny>=b||nz<0||nz>c) continue;
        if(mark[nx][ny][nz]== true) continue;
        if(maze[nx][ny][nz]==1) continue;
        N tmp;
        tmp.x=nx;
        tmp.y=ny;
        tmp.z=nz;
        tmp.t = now.t+1;
      //  printf("BFSµ½´ï%d %d %d ºÄÊ± %d\n",nx,ny,nz,tmp.t);
        Q.push(tmp);
        mark[nx][ny][nz] = true;
        if (nx == a-1 && ny == b -1&&nz == c-1) return tmp.t;

    }
}
return -1;
}


int main(){

int n,ans,a,b,c,t;
//freopen("test.txt","r",stdin);
cin>>n;

while (n--){

    cin>>a>>b>>c>>t;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            for(int k=0;k<c;k++){

                cin>>maze[i][j][k];
                mark[i][j][k] = false;
            }
        }
    }
    while(Q.empty() == false) Q.pop();
    mark[0][0][0] = true;
    N tmp;
    tmp.t=tmp.y=tmp.x=tmp.z=0;
    Q.push(tmp);
    int rec = BFS(a,b,c);
    if (rec <=t) printf("%d\n",rec);
    else printf("-1\n");
}
return 0;
}

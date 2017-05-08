#include<stdio.h>
#include<iostream>
using namespace std;



int wmap[201][201];
int mark[201][201];
int M,N;
int d[4][2]={
1,0,
0,1,
-1,0,
0,-1
};

void DFS(int X,int Y,int H){
mark[X][Y] = 1;
printf("Ë®ÑÍX:%d Y:%d ¸ß¶È£º%d\n",X,Y,wmap[X][Y]);
for(int i=0;i<4;i++){
int nx=X+d[i][0];
int ny=Y+d[i][1];
if(H<=wmap[nx][ny]) continue;
if(nx==M||nx==0||ny==N||ny==0) continue;
if(mark[nx][ny]==0){DFS(nx,ny,H);}
}

}


int main(){
int K,P,X,Y,CX,CY,H;
freopen("BOJ12029T.txt","r",stdin);
cin>>K;

while(K--){
    cin>>M>>N;

for(int i=1;i<=200;i++){
    for(int j=1;j<=200;j++){
        mark[i][j]=0;
    }
}

for(int i=1;i<=M;i++){
    for(int j=1;j<=N;j++){
        cin>>wmap[i][j];
    }
}
cin>>CX>>CY;
//center.h=wmap[CX][CY];
cin>>P;
for(int i=0;i<P;i++){
cin>>X>>Y;
H=wmap[X][Y];
DFS(X,Y,H);
if (mark[CX][CY]==1){cout<<"Yes"<<endl;break;}
}
if(mark[CX][CY]==0) cout<<"No"<<endl;

}
return 0;
}

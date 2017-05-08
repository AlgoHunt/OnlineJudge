#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;
int maze[52][52][52];
int a, b,c,T;
int forwardt = 0;

void init(){
for(int i=0;i<52;i++){
    for(int j=0;j<52;j++){
        maze[0][i][j]=1;
        maze[51][i][j]=1;
        maze[i][0][j]=1;
        maze[i][51][j]=1;
        maze[i][j][0]=1;
        maze[i][j][51]=1;

    }
}

}



void block(int x,int y,int z)
{
maze[x][y][z]+=1;
maze[x+1][y][z]+=1;
maze[x-1][y][z]+=1;
maze[x][y+1][z]+=1;
maze[x][y-1][z]+=1;
maze[x][y][z+1]+=1;
maze[x][y][z-1]+=1;

}

void deblock(int x,int y, int z)
{
maze[x][y][z]-=1;
maze[x+1][y][z]-=1;
maze[x-1][y][z]-=1;
maze[x][y+1][z]-=1;
maze[x][y-1][z]-=1;
maze[x][y][z+1]-=1;
maze[x][y][z-1]-=1;

}


int solve(int x,int y,int z){
if(x==a&&y==b&&z==c){ return 1;}

if(forwardt>T) return -1;
forwardt++;

int time[6];
for(int i=0;i<6;i++){
  time[i]=-1;
}
    int i=0,ans=-1;
    block(x,y,z);
    //maze[x][y][z]=1;
    cout<<"x:"<<x<<" y:"<<y<<" z:"<<z<<endl;
    if(x!=a&&maze[x+1][y][z]==1){time[i++]=solve(x+1,y,z);}
    if(x!=1&&maze[x-1][y][z]==1){time[i++]=solve(x-1,y,z);}
    if(y!=b&&maze[x][y+1][z]==1){time[i++]=solve(x,y+1,z);}
    if(y!=1&&maze[x][y-1][z]==1){time[i++]=solve(x,y-1,z);}
    if(z!=c&&maze[x][y][z+1]==1){time[i++]=solve(x,y,z+1);}
    if(z!=1&&maze[x][y][z-1]==1){time[i++]=solve(x,y,z-1);}


sort(time,time+6);
for(i=0;i<6;i++){
  //  cout<<time[i]<<" ";
    if(time[i]!=-1) {ans=time[i];break;}
}
deblock(x,y,z);
//maze[x][y][z]=0;
//cout<<" ans: "<<ans<<endl;
forwardt--;
return (ans==-1||ans>T)?-1:ans+1;
}

int main(){

int n,ans;
freopen("test.txt","r",stdin);
cin>>n;
init();
while (n--)
{

    cin>>a>>b>>c>>T;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            for(int k=1;k<=c;k++){

                cin>>maze[i][j][k];
            }
        }
    }



ans=solve(1,1,1)-1;
if (ans>=0&&ans<=T) {printf("%d\n",ans);}
else printf("-1\n");
}


return 0;
}

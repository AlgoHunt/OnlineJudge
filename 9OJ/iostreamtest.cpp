#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;
int maze[52][52][52];

int main(){

int a,b,c,T,n,ans;
freopen("test.txt","r",stdin);
cin>>n;
while (n--)
{
    //scanf("%d %d %d %d",&a,&b,&c,&T);
    cin>>a>>b>>c>>T;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            for(int k=1;k<=c;k++){
                //scanf("%d",&maze[i][j][k]);
                cin>>maze[i][j][k];
            }
        }
    }

    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            for(int k=1;k<=c;k++){
                //scanf("%d",&maze[i][j][k]);
                cout<<maze[i][j][k]<<" ";
            }
             cout<<endl;
        }

    }

}
return 0;
}

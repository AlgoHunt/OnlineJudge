#include<stdio.h>
#include<iostream>
using namespace std;

int buff[101][101];

int main(){
int col ,row,layer,flag;
freopen("test.txt","r",stdin);
cin>>row>>col;
//scanf("%d,%d",&row,&col);
while(cin>>row>>col){
    for(int i=0;i<=100;i++){
        for(int j=1;j<=100;j++){
            buff[i][j]=-1;
        }
    }

    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            cin>>buff[i][j];
        }
    }
flag=0;
layer=row>col?col:row;
if (layer%2==1) flag=1;

layer/=2;
for(int i=0;i<layer;i++){
    for(int j=1+i;j<col-i;j++){ cout<<buff[i+1][j]<<endl;}
    for(int j=1+i;j<=row-i;j++){ cout<<buff[j][col-i]<<endl;}
    for(int j=col-i-1;j>i+1;j--){ cout<<buff[row-i][j]<<endl;}
    for(int j=row-i;j>i+1;j--){ cout<<buff[j][i+1]<<endl;}

}
if (flag==1&&row>col){
for(int j=layer;j<row-layer;j++){
    cout<<buff[j][col/2]<<endl;
}
}

if (flag==1&&col>row){
for(int j=layer;j<col-layer;j++){
    cout<<buff[row/2][j]<<endl;
}
}
if (flag==1&&col==row){
    cout<<buff[row/2+1][col/2+1]<<endl;

}



}
return 0;
}

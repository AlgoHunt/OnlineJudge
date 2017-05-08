#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;


int main(){
string word[20],sentence[20];
int n,m;


freopen("BOJ12753T.txt","r",stdin);

cin>>n>>m;
getchar();
for(int i=0;i<n;i++){
    getline(cin,word[i]);

}
for(int i=0;i<m;i++){
    getline(cin,sentence[i]);
    cout<<"Ìæ»»Ç°: "<<sentence[i]<<endl;
    for(int j=0;j<n;j++){
        int pos=sentence[i].find(word[j]);
        if(pos == -1) continue;
        cout<<"Find :"<<word[j]<<endl;
        for(int k=pos;k<pos+word[j].size();k++){
            sentence[i][k]='*';
        }
    }
    cout<<"Ìæ»»ºó: "<<sentence[i]<<endl<<endl;
}
//for(int i=0;i<n;i++){cout<<word[i]<<endl;}



return 0;
}

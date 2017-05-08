#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
int cnt,n,flag,rec;

while(scanf("%d",&cnt)!=EOF){
    int num,numHash[201]={};
        flag=1;
      for(int i=0;i<cnt;i++){
          scanf("%d",&n);
          numHash[i]=n;
          }
      scanf("%d",&n);
      for(int i=0;i<cnt;i++){
         if(numHash[i]==n){flag=0;rec=i; break;}


      }
      if (flag){cout<<"-1"<<endl;}
      else{printf("%d\n",rec);}
      }
return 0;
}

#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;



int card1[10],card2[10];

int sum(int a[],int i){
int ans;
for(int j=0;j<i;j++){
    ans+=a[i];
    }
}

int main(){
int n,m;
char tmp;
while(cin>>n>>m){
    for(int i=0;i<n;i++)
        {
        cin>>tmp;
        if(tmp>='0'&&tmp<='9')
            {card1[i]=tmp-'0';}
        else if(tmp== 'A'){card1[i]=0;}
        else {card1[i]=10;}
        }
    for(int i=0;i<m;i++)
        {
            cin>>tmp;
        if(tmp>='0'&&tmp<='9')
            {card2[i]=tmp-'0';}
        else if(tmp== 'A'){card2[i]=0;}
        else {card2[i]=10;}
        }
    sum(card1[0],n);
    sum(card2[0],m);

}

return 0;
}

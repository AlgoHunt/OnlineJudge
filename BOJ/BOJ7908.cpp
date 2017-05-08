#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;

struct stu{
int math,chinese,english;
int sum;
int id;

void getsum(){
sum=math+chinese+english;
}

}s[301];

bool cmp1(stu x,stu y){
    return x.id<y.id;
}

bool cmp2(stu x,stu y){
    return x.chinese>y.chinese;
}

bool cmp3(stu x,stu y){
    return x.sum>y.sum;
}

int main(){
int n;
freopen("test.txt","r",stdin);
while(scanf("%d",&n)!=EOF){
    for(int i=1;i<=n;i++){
        cin>>s[i].chinese>>s[i].math>>s[i].english;
        s[i].id=i;
        s[i].getsum();
    }
stable_sort(s+1,s+n+1,cmp1);
stable_sort(s+1,s+n+1,cmp2);
stable_sort(s+1,s+n+1,cmp3);

for(int i=1;i<=5;i++){
    cout<<s[i].id<<" "<<s[i].sum<<endl;
}

}

return 0;
}

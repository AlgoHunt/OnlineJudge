#include<stack>
#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include <vector>
using namespace std;

int main(){
string buf;
vector<int> ans;
freopen("9OJ1153.txt","r",stdin);
while(getline(cin,buf)){
ans.clear();
cout<<buf<<endl;
stack<int> sta;
char tmp;
for(int i=0;i<buf.size();i++){

    if(buf[i]=='(') {sta.push(i+1);ans.push_back(i+1);continue;}
    else if(buf[i]==')'){
        if(sta.empty()){ans.push_back(-1);continue;}
        else{sta.pop();ans.push_back(0);continue;}
    }
    ans.push_back(0);
}
vector<int>::iterator it=ans.begin();
//cout<<ans<<endl;
while(!sta.empty()){
    tmp=sta.top();
    sta.pop();
    it = find(ans.begin(),ans.end(),tmp);
    *it=-2;
}

for(it = ans.begin();it!=ans.end();it++){
    if(*it==-1) cout<<"?";
    else if(*it==-2) cout<<"$";
    else cout<<" ";
}
cout<<endl;
}
//cout<<ans<<endl;
return 0;
}

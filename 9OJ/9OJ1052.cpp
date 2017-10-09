#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
ios::sync_with_stdio(false);
int n,tmp;
vector<int> v;
while(cin>>n){
    v.clear();
    for(int i=0;i<n;i++){
        cin>>tmp;
        v.push_back(tmp);
    }
    cin>>tmp;
    vector<int>::iterator pos=find(v.begin(),v.end(),tmp);
    if(pos==v.end()) {cout<<"-1"<<endl;continue;}
    cout<<distance(v.begin(),pos)<<endl;
}

return 0;
}

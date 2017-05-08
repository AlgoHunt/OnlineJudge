#include<cstdio>
#include<algorithm>
#include<vector>
#include<queue>
#include<iostream>
using namespace std;

vector<int>edge[501];
queue<int> Q;
int indegree[501];


void init(){
for(int i=0;i<501;i++){
    indegree[i]=0;
    edge[i].clear();
}
while(!Q.empty()){
    Q.pop();

}

}


int main(){
int n,m,tmpa,tmpb;
//freopen("9OJ1448.txt","r",stdin);
while(cin>>n>>m){
    if(n==0) break;
    int flag=0;
    init();
    for(int i=0;i<m;i++){
        cin>>tmpa>>tmpb;
        //printf("")
        edge[tmpa].push_back(tmpb);
        indegree[tmpb]++;

    }
   // int *pos=find(indegree,indegree+n,0);
   // int tmp=distance(indegree,pos);
  //  Q.push(tmp);
  // if( pos==indegree+n){flag=1;Q.pop();}

   for(int i=0;i<n;i++){
        if(indegree[i]==0) Q.push(i);
   }
    //printf("发现 %d 入度为零入队\n",tmp);
    while(!Q.empty()){
       int  tmp=Q.front();
        Q.pop();
        vector<int>::iterator it;
        for(it=edge[tmp].begin();it!=edge[tmp].end();it++){
            indegree[*it]--;
            if(indegree[*it]==0) {
                   // printf("发现 %d 入度为零入队\n",*it);
                    Q.push(*it);}
        }
    }

    for(int i=0;i<n;i++){
        //cout<<indegree[i]<<endl;
        if(indegree[i]!=0) { flag=1;break;}
    }
    if(flag==0) printf("YES\n");
    else printf("NO\n");
}

return 0;
}

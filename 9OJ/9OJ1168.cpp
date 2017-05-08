#include <string>
#include<iostream>
#include<cctype>
//include<stdio.h>
//#include<string.h>
using namespace std;

int main(){
string word,sentence,lowsentence;
cin>>word;
int length=word.size();
for(int i=0;i<length;i++){
    word[i]=tolower(word[i]);
}

//cout<<word<<endl;
cin.get();

while(getline(cin,sentence)){
    lowsentence=sentence;
 //   cout<<"转换前："<<sentence<<endl;
    for(int i=0;i<sentence.size();i++){
        lowsentence[i]=tolower(lowsentence[i]);
    }
    //lowsentence+'\0';
  //  cout<<"转换后： "<<lowsentence<<endl;
    int  pos=lowsentence.find(word);


    while(pos!=-1){
        sentence.erase(pos,length);
        lowsentence.erase(pos,length);
        pos=lowsentence.find(word);
    }
    pos=sentence.find(' ');
    while(pos!=-1){
         sentence.erase(pos,1);
         pos=sentence.find(' ');
    }

    cout<<sentence<<endl;
}

return 0;
}

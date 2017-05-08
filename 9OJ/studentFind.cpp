#include<stdio.h>
#include<algorithm>
using namespace std;
struct Student{
int id;
char name[20];
char gender[10];
int age;
}Stu[1001];

bool cmp(Student a,Student b){
return a.id<b.id;
}


void printS(Student s);
int bSearch(Student Stu[],int low,int high,int id);

int main(){
int n,m,id,pos;

while(scanf("%d",&n)!=EOF){
    for(int i=0;i<n;i++){
        scanf("%d %s %s %d",&Stu[i].id,&Stu[i].name,&Stu[i].gender,&Stu[i].age);
        }
    //printf("排序结果：\n");
    sort(Stu,Stu+n,cmp);
    //for(int i=0;i<n;i++){

    //  printf("%d %s %s %d\n",Stu[i].id,Stu[i].name,Stu[i].gender,Stu[i].age);
    // }
    //printf("输入查找次数：");
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        scanf("%d",&id);
        pos=bSearch(Stu,0,n-1,id);
        if(pos==-1){printf("No Answer!\n");}
        else{printS(Stu[pos]);}
        }
    }
return 0;
}

void printS(Student s){
printf("%d %s %s %d\n",s.id,s.name,s.gender,s.age);
}

int bSearch(Student Stu[],int low,int high,int id){
    int mid;
while(low<=high){
    int mid = (low+high)/2;
    if(Stu[mid].id>id){
        high = mid - 1;
        }
    else if(Stu[mid].id<id){
        low = mid + 1;
    }
    else{
        return mid;
    }
}
return -1;

}

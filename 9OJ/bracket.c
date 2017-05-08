#include<stdio.h>

char str[110];
char ans[110];
char S[110];


void push(char S[],char *elem,int *top){
S[++(*top)]=*elem;
printf("pushing\n");
return;
}

void pop(char S[],char *elem,int *top){
*elem=S[(*top)--];
printf("poping\n");
return;
}

int main(){
char a,*pa;
int top=-1,i,*ptop,num;
ptop =&top;
pa=&a;
while (scanf("%c",&a)!=EOF){
    if (a=='`') break;
    getchar();
    push(S,pa,ptop);
}
for(i=0;i<=top;i++)
{
    printf("%c\n",S[i]);
}

printf("弹出的个数\n");
scanf("%d",&num);
for(i=0;i<num;i++)
{
    pop(S,pa,ptop);
    printf("%c\n",a);
}


return 0;
}

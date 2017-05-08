#include<stdio.h>
#include<string.h>

int main(){
char a[100],b[100];
int cipher[26];
int guess[26];
int i,j,loc,flag,offset;
while(scanf ("%s",&a)!=EOF){
    //printf("%s",a);
    flag=1;
    scanf("%s",&b);
    for(i=0;i<26;i++){cipher[i]=0;guess[i]=0;}
    if (strlen(a)!=strlen(b)) {printf("NO\n");continue;}
    i=0;
    while(a[i]!='\0'){
     //   printf("test:%d\n",'B'-'A');
        loc = (int)(a[i]-'A');
      //  printf("LOC: %d\n",loc);
        cipher[loc]++;
        loc = (int)(b[i]-'A');
        guess[loc]++;
        i++;
    }
  //  for(i=0;i<26;i++){printf("cipher:%d guess:%d\n",cipher[i],guess[i]);}

    for(i =0;i<26;i++){
        flag = 1;
       // printf("第 %d 次循环对比\n",i);
        for(j=0;j<26;j++){
            offset = (j+i)%26;
          //  printf("cipher:%d guess:%d\n",cipher[offset],guess[j]);
            if (cipher[offset]!=guess[j]) {flag=0;break;}
        }
        if(flag == 1) break;

    }
if (flag) printf("YES\n");
else printf("NO\n");

}
return 0;
}



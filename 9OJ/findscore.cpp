#include<stdio.h>

int main(){
int n;
int score[1001];
int target,cnt;
while (scanf("%d",&n)!=EOF){
    if (n == 0) return 0;
    for(int i=0;i<n;i++){
        scanf("%d",&score[i]);
        }
    scanf("%d",&target);
    cnt=0;
    for(int i=0;i<n;i++){

        if(score[i]==target) cnt++;
        //printf("score is%d target is %d cnt is%d\n",score[i],target,cnt);
        }
    printf("%d\n",cnt);
    }
return 0;
}

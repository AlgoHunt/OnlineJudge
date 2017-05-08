int main(){
int i;
double ave=0.0,num;
for(i=0;i<12;i++){
    scanf("%lf",&num);
    ave+=(num/12);
}

printf("$%.2lf",ave);
return 0;
}

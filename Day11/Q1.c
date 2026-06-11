#include<stdio.h>
int sum_no(int a,int b){
    return a+b;
}
int main(){
    int a,b,sum=0;
    scanf("%d%d",&a,&b);
    sum=sum_no(a,b);
    printf("Sum=%d",sum);
    return 0;
}
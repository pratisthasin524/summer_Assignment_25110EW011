#include<stdio.h>
long long fact(int n){
    if(n==1||n==0) return 1;
    else return n*fact(n-1);
}
int main(){
    int n;
    long long result;
    printf("enter no.");
    scanf("%d",&n);
    result=fact(n);
    printf("%lld",result);
}
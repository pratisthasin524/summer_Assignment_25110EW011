#include<stdio.h>
long long fib(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    else return fib(n-1)+fib(n-2);
}
int main(){
    int n;
    long long result;
    printf("enter no.");
    scanf("%d",&n);
    result=fib(n);
    printf("%lld",result);
}
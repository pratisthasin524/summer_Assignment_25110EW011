#include<stdio.h>
int main(){
    int n;
    long long fact=1;
    printf("enter no.");
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        fact*=i;
    }
    printf("factorial=%lld",fact);
    return 0;
}
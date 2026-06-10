#include<stdio.h>
int main(){
    int n,sum_dig=0;
    printf("enter no.");
    scanf("%d",&n);
    while(n>0){
        sum_dig+=(n%10);
        n/=10;
    }
    printf("sum of digits in a no.=%d",sum_dig);
    return 0;
}
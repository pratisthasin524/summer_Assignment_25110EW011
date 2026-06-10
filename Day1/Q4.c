#include<stdio.h>
int main(){
    int n,count=0;
    printf("enter no. of natural no.s");
    scanf("%d",&n);
    while(n>0){
        count++;
        n/=10;
    }
    printf("No. of digits in a no.=%d",count);
    return 0;
}
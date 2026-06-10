#include<stdio.h>
int main(){
    int n,pro_dig=1;
    printf("enter no.");
    scanf("%d",&n);
    while(n>0){
        pro_dig*=(n%10);
        n/=10;
    }
    printf("product of digits in a no.=%d",pro_dig);
    return 0;
}
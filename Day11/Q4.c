#include<stdio.h>
long long fact(int a){
    long long fact=1;
    for (int i = 1; i <=a; i++)
    { fact*=i;
    }
    printf("%lld",fact);
}
int main(){
    int a;
    printf("Enter no.");
    scanf("%d",&a);
    fact(a);
    return 0;
}
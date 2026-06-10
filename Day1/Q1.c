#include<stdio.h>
int main(){
    int n;
    long long sum=0;
    printf("enter no. of natural no.s");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    printf("sum=%lld",sum);
    return 0;
}


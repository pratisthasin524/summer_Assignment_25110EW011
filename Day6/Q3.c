#include<stdio.h>
int main(){
    int n,bin=0,rem,place=1,cnt=0;
    printf("enter no.");
    scanf("%d",&n);
    while(n>0){
        bin=bin+(n%2)*place;     
        if(n%2==1)cnt++;
        place*=10;
        n=(n/2);
        //optimal
        // n=n&(n-1);
        // cnt++;
    }
    printf("count of set bits=%d",cnt);
    return 0;
}
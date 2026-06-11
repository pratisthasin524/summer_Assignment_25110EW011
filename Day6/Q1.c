#include<stdio.h>
int main(){
    int n,bin=0,rem,place=1;
    printf("enter no.");
    scanf("%d",&n);
    while(n>0){
        bin=bin+(n%2)*place;
        place*=10;
        n=(n/2);
    }
    printf("reverse of the no.=%d",bin);
    return 0;
}
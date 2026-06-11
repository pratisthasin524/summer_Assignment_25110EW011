#include<stdio.h>
int main(){
    int n,dec=0,rem,place=1;
    printf("enter no.");
    scanf("%d",&n);
    while(n>0){
        dec=dec+(n%10)*place;
        place*=2;
        n=(n/10);
    }
    printf("reverse of the no.=%d",dec);
    return 0;}
#include<stdio.h>
int main(){
    int n,n1=0,sum=0;
    printf("enter no.");
    scanf("%d",&n);
    n1=n;
    for(int i=1;i<=(n/2);i++){
        if(n%i==0){
            sum+=i; }
    }
    if(n==sum) printf("Is a Perfect no.");
    else printf("Is not a Perfect no.");
    return 0;
}
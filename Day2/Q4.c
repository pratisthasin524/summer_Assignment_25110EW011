#include<stdio.h>
int main(){
    int n,n1=0,rev=0;
    printf("enter no.");
    scanf("%d",&n);
    n1=n;
    while(n>0){
        rev=rev*10+(n%10);
        n/=10;
    }
    if(rev==n1) printf("Is a Palindrome");
    else printf("Is not a Palindrome");
    return 0;
}
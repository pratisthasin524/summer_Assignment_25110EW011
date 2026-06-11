#include<stdio.h>
#include<math.h>
int main(){
    int n,n1,n2,cnt=0,arm=0,rem;
    printf("enter no.");
    scanf("%d",&n);
    n1=n2=n;
    while(n>0){
        cnt++;
        n/=10;
    }
    while(n1>0){
        rem=n1%10;
        arm+=(float)pow(rem,cnt);
        n1/=10;
    }
    if(arm==n2) printf("Is a Armstrong");
    else printf("Is not a Armstrong");
    return 0;
}
#include<stdio.h>
#include<math.h>
int armstrong(int n1,int n2){
    int n3,n,cnt,rem,arm=0;
    for(int i=n1;i<n2;i++){
        n=n3=i;
        cnt=0,arm=0;
    while(n>0){
        cnt++;
        n/=10;
    }
    while(n3>0){
        rem=n3%10;
        arm+=(float)pow(rem,cnt);
        n3/=10;
    }
    if(arm==i) printf("Armstrong no.s are=%d",arm);}
}
int main(){
    int a,b;
    printf("Enter range=");
    scanf("%d%d",&a,&b);
    armstrong(a,b);
    return 0;
}
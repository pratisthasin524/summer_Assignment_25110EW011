#include<stdio.h>
#include<math.h>
int main(){
    int n,n1,n2,n3,cnt,arm,rem;
    printf("enter no.");
    scanf("%d%d",&n1,&n2);
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
    if(arm==i) printf("%d",arm);}
    return 0;
}
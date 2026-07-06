#include<stdio.h>
int main(){
    int n,sum=0,avg=0;
    printf("enter no. of elements");
    scanf("%d",&n);
    int l[n];
    printf("enter elements");
    for(int i=0;i<n;i++){
        scanf("%d",&l[i]);
        sum+=l[i];
    }
    avg=sum/(sizeof(l)/sizeof(l[0]));
    printf("Sum of elements=%d and average=%d\n",sum,avg);

    return 0;
}
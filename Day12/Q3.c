#include<stdio.h>
int fibo(int n){
    int pre=0,curr=1,nxt=0;
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",curr);
        nxt=curr+pre;
        pre=curr;
        curr=nxt;

    }
}
int main(){
    int a;
    printf("Enter no. of terms");
    scanf("%d",&a);
    fibo(a);
    return 0;
}
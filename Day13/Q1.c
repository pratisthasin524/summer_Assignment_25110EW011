#include<stdio.h>
int main(){
    int n;
    printf("enter no. of elements");
    scanf("%d",&n);
    int l[n];
    printf("enter elements");
    for(int i=0;i<n;i++){
        scanf("%d",&l[i]);
    }
    for(int i=0;i<n;i++){
        printf("Element no. %d=%d\n",i+1,l[i]);
    }

    return 0;
}
#include<stdio.h>
int main(){
    int n,tar,found=1;
    printf("enter no. of elements");
    scanf("%d",&n);
    int l[n];
    printf("enter elements");
    for(int i=0;i<n;i++){
        scanf("%d",&l[i]);
    }
    printf("enter target");
    scanf("%d",&tar);
    for(int i=0;i<n;i++){
        if(l[i]==tar) found=0;
    }
    if(found==0) printf("Element is present");
    else printf("Element is not present");
    return 0;
}
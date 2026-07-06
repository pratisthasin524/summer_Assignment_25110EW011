#include<stdio.h>
int main(){
    int n,tar,found=0;
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
        if(l[i]==tar) found++;
    }
    if(found) printf("Element frequency=%d",found);
    else printf("Element is not present");
    return 0;
}
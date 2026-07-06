#include<stdio.h>
int main(){
    int n,even=0,odd=0;
    printf("enter no. of elements");
    scanf("%d",&n);
    int l[n];
    printf("enter elements");
    for(int i=0;i<n;i++){
        scanf("%d",&l[i]);
    }
    for(int i=0;i<n;i++){
        if(l[i]%2==0) even++;
        else odd++;
    }
    printf("No. of even=%d and odd=%d",even,odd);
    return 0;
}
#include<stdio.h>
int main(){
    int n,min,max;
    printf("enter no. of elements");
    scanf("%d",&n);
    int l[n];
    printf("enter elements");
    for(int i=0;i<n;i++){
        scanf("%d",&l[i]);
    }
    min=max=l[0];
    for(int i=0;i<n;i++){
        if(l[i]>max) max=l[i];
        if(l[i]<min) min=l[i];
    }
    printf("Largest no.=%d and smallest=%d",max,min);
    return 0;
}
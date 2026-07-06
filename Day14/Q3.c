#include<stdio.h>
int main(){
    int n,sec_max,max;
    printf("enter no. of elements");
    scanf("%d",&n);
    int l[n];
    printf("enter elements");
    for(int i=0;i<n;i++){
        scanf("%d",&l[i]);
    }
    max=sec_max=l[0];
    for(int i=0;i<n;i++){
        if(l[i]>max) max=l[i];
        if( sec_max< max && sec_max<l[i]) sec_max=l[i];}
    printf("Second Largest no.=%d",sec_max);
    return 0;
}
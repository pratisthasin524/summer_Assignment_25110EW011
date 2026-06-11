#include<stdio.h>
int prime(int a){
    int cnt=0;
    for (int i = 2; i < a; i++)
    {
        if (a%i==0) cnt++;
    }
    if (cnt>0)
            printf("Is not a Prime no.");
        else
            printf("Is a Prime no.");
}
int main(){
    int a;
    scanf("%d",&a);
    prime(a);
    return 0;
}
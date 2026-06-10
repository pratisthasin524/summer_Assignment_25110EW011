#include <stdio.h>
int main()
{
    int n1,n2,rem=0,n3,n4;
    printf("enter range");
    scanf("%d%d", &n1, &n2);
    n3=n1,n4=n2;
    while(n2!=0){
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    printf("LCM=%d",(n4*n3)/n1);
    return 0;
}
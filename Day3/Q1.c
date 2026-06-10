#include <stdio.h>
int main()
{
    int n,cnt=0;
    printf("enter no.");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if (n%i==0) cnt++;
    }
    if (cnt>0)
            printf("Is not a Prime no.");
        else
            printf("Is a Prime no.");
    return 0;
}
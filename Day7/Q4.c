#include <stdio.h>
int  rev = 0;
int rev_of_dig(int n)
{
    if (n == 0)
    {
        return rev;
    }
    else
    {
        rev=rev*10+(n % 10);
        rev_of_dig(n / 10);
    }
}
int main()
{
    int n, rev=0;
    printf("enter no.");
    scanf("%d", &n);
    rev=rev_of_dig(n);
    printf("sum of digits in a no.=%d", rev);
    return 0;
}
#include <stdio.h>
int sum_dig = 0;
int sum_of_dig(int n)
{
    if (n == 0)
    {
        return sum_dig;
    }
    else
    {
        sum_dig += (n % 10);
        sum_of_dig(n / 10);
    }
}
int main()
{
    int n, sum=0;
    printf("enter no.");
    scanf("%d", &n);
    sum=sum_of_dig(n);
    printf("sum of digits in a no.=%d", sum);
    return 0;
}
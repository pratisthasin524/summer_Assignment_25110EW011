#include <stdio.h>
int main()
{
    int n, n1 = 0, rem, sum_fact = 0;
    printf("enter no.");
    scanf("%d", &n);
    n1 = n;
    while (n > 0)
    {
        rem = n % 10;
        int  fact = 1;
        for (int j = 1; j <= rem; j++)
        {
            fact *= j;
        }
        sum_fact += fact;
        n /= 10;
    }

    if (n1 == sum_fact)
        printf("Is a Strong no.");
    else
        printf("Is not a Strong no.");
    return 0;
}
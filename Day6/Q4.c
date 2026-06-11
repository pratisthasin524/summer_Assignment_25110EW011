#include <stdio.h>
int main()
{
    int base, pow, res = 1;
    printf("enter base and power");
    scanf("%d%d", &base, &pow);
    for (int i = 0; i < pow; i++)
    {
        res *= base;
        ;
    }
    printf("x^n=%d", res);
    return 0;
}
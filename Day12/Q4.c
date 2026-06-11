#include <stdio.h>
int perfect(int a)
{
    int cnt = 0;
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            cnt = +i;
        }
    }
    if (cnt == a)
        printf("Is a Perfect no.");
    else
        printf("Is not a Perfect no.");
}
int main()
{
    int a;
    scanf("%d", &a);
    perfect(a);
    return 0;
}
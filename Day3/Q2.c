#include <stdio.h>
int main()
{
    int n1, n2;
    printf("enter range");
    scanf("%d%d", &n1, &n2);
    for (int i = n1; i <= n2; i++)
    {
        int cnt = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                cnt++;
            }
        }
        if (cnt == 2)
            printf("%d", i);
    }
    return 0;
}

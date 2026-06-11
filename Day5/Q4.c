#include <stdio.h>
int main()
{
    int n1, n2, lar = 0;
    printf("enter no.");
    scanf("%d%d", &n1, &n2);
    for (int i = n1; i <= n2; i++)
    {
        int cnt = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
                cnt++;
        }
        if (cnt==0)
            lar = i;
    }
    printf("%d", lar);
    return 0;
}
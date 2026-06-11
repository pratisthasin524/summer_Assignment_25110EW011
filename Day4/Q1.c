#include <stdio.h>
int main()
{
    int n,pre=0,curr=1,nxt=0;
    printf("enter no. of terms");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",curr);
        nxt=curr+pre;
        pre=curr;
        curr=nxt;

    }
    return 0;
}
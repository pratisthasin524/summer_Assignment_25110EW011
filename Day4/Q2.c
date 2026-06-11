#include <stdio.h>
int main()
{
    int n,pre=0,curr=1,nxt=0;
    printf("enter no. of terms");
    scanf("%d", &n);
    for (int i = 0; i < n-1; i++)
    {
        nxt=curr+pre;
        pre=curr;
        curr=nxt;

    }
    printf("%d\n",curr);
    return 0;
}

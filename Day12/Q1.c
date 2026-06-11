#include <stdio.h>
int palindrome(int n){
    int rev = 0,n1=n;
    while(n>0){
        rev=rev*10+(n%10);
        n/=10;
    }
    if (rev == n1)
        printf("Is a Palindrome");
    else
        printf("Is not a Palindrome");
}
int main()
{
    int a;
    printf("Enter the no.");
    scanf("%d", &a);
    palindrome(a);
    return 0;
}
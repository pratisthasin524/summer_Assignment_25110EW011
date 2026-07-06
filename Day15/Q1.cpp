#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter no. of elements";
    cin>>n;
    int l[n];
    printf("enter elements");
    for (int i = 1; i <= n; i++)
    {
        cin >> l[i];
    }
    printf("Reversed array\n");
    for (int i = n; i > 0; i--)
    {
        cout << i << "=" << l[i] << endl;
    }

    return 0;
}
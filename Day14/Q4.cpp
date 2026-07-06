#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << ("enter no. of elements");
    cin >> n;
    int l1[n];
    cout << "enter elements";
    int hash[n + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        cin>>l1[i];
        hash[l1[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (hash[l1[i]] > 1)
            cout << "Duplicate found="<<l1[i]<<endl;
            hash[l1[i]]=0;
    }
    return 0;
}
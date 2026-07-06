#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, left;
    cout<<"enter no. of elements";
    cin>>n;;
    int l[n],temp[n];
    cout<<"enter elements\n";
    for (int i = 0; i <n; i++)
    {
        cin>>l[i];
    }
    cout<<"enter no. place to shift to left";
    cin>>left;
    left%=n;
    for (int i = 0; i <left; i++){
        temp[i]=l[i];}
    for (int i = left; i <n; i++){
        l[i-left]=l[i];}
    for (int i =n-left; i <n; i++){
        l[i]=temp[i-left-1];}
    printf("Left shifted array\n");
    for (int i = 0; i < n; i++)
    {
        cout<<l[i]<<endl;
    }

    return 0;
}
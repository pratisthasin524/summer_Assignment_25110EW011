#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, ryt;
    cout<<"enter no. of elements";
    cin>>n;;
    int l[n],temp[n];
    cout<<"enter elements\n";
    for (int i = 0; i <n; i++)
    {
        cin>>l[i]; 
    }
    cout<<"enter no. place to shift to ryt";
    cin>>ryt;
    ryt%=n;
     for (int i = 0; i <n-ryt; i++){
         temp[i]=l[i];
     }
      for (int i = n-ryt; i <n; i++){
         l[i-ryt-n]=l[i];}
     for (int i =ryt; i <n; i++){
        l[i]=temp[i-ryt];
    }
     printf("Right shifted array\n");
     for (int i = 0; i < n; i++)
     {
         cout<<l[i]<<endl;
     }

    return 0;
}
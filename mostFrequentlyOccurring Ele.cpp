#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int a[100]={0};
    for(int i=0; i<n;i++)
    {
        a[arr[i]] = a[arr[i]]+1;
    }
    int m=a[0],in=0;
    for(int i=1;i<100; i++)
    {
            if(m<a[i])
            {
                m = a[i];
                in = i;
            }
           // m=max(m,a[i]);
    }
    cout<<in;
    return 0;

}

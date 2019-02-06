#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
     cin>>n>>m;
     int arr[n];
     int brr[m];
     for(int k=0;k<n;k++)
     {
         cin>>arr[k];
     }
     int ans[max(n,m)],s=0;;
     for(int k=0;k<m;k++)
     {
         cin>>brr[k];
     }
     int i=0, j=0;
     while(i<n && j<m)
     {
         if(arr[i]==brr[j])
         {
             ans[s++] =arr[i];
             i++;
             j++;
         }
         while(arr[i]<brr[j] && i<n)
         {
             i++;
         }
         while(brr[j]<arr[i] && j<m)
         {
             j++;
         }
     }
     for(int x=0; x<s; x++)
        cout<<ans[x]<<" ";
     return 0;
}

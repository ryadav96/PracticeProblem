#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int ans=0;
        int l =str.length();
        cout<<l<<endl;
        for(int i=0; i<l/2; i++)
        {
            cout<<str[i]<<" "<<str[l-i-1]<<endl;
            if(str[i] == str[l-i-1])
            ans++;
        }
        cout<<ans<<endl;
        if(ans==l/2)
        cout<<"YES "<<"EVEN"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin >>t;
while(t--)
{
int N, k, hash[1001] = {0}, f=0;
cin>>N>>k;
while(N--)
{
int num;
cin>>num;
if(k-num > 0 && hash[k-num])
{
f = 1;
break;
}
hash[num]++;
}
if(!f)
cout<<"No "<<endl;
else
cout<<"yes "<<endl;
}
return 0;
}

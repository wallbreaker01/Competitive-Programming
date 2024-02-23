#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

void solve()
{
    ll n,i;
    cin >> n;
    if(n%2==1)
    {
        cout<<n-1<<" ";
        for(i=n-3;i>1;i--) cout<<i<<" ";
        cout<<"1 "<<n-2<<" "<<n;
    }
    
    else
    {
        for(i=n-2;i>=1;i--) cout<<i<<" ";
         cout<<n-1<<" "<<n;
    }
    cout<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}

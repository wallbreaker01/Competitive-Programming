#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll s[n],s2[n];
    for (int i = 0 ; i < n ; i++) 
    {
        cin>>s[i];
    }
    ll ans=0;
    if(n==1) cout<<"0"<<endl;
    else
    {
        for (int i = 0 ; i < n-1 ; i++) ans=max(ans,s[i]-s[0]);
        for (int i = 0 ; i < n-1 ; i++) ans=max(ans,s[i]-s[i+1]);
        for (int i = 0 ; i < n-1 ; i++) ans=max(ans,s[n-1]-s[i]);
        cout<<ans<<endl;

    }


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

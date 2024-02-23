#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

void solve()
{
    ll n,k;
    cin >> n >> k ;
    ll s[n];
    ll c=0;
    for (ll i = 0 ; i < n ; i++) cin>>s[i];
    for (ll i = 0 ; i < n ; i++) 
    {
        if(s[i]==1) c=1;

    }
    if(c==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


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

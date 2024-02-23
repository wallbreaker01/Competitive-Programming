#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

void solve()
{
    ll n,k;
    cin >> n >> k;
    vector<ll>s(n);
    for (ll i = 0 ; i < n ; i++) cin>>s[i];
    ll sum=0;
    for (ll i = 0 ; i < k ; i++) 
    {
        ll maxx=-1;
        for (ll j = i ; j < n ; j=j+k) maxx=max(maxx,s[j]);
    }
    for(auto n: s) sum=sum+n;
    cout<<sum<<endl;


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

#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define pb push_back

void solve()
{
    ll n,x,y;
    cin >>n>>x>>y;
    ll s[n];
    for (ll i = 0; i < n; i++) cin>>s[i];
    map<pair<ll, ll>, ll>mp;
    ll ans=0;
    for (ll i = 0; i < n; i++)
    {
        ll p = s[i] % x;
        ll q = s[i] % y;
        ans += mp[{x - p, q}];
        if (p == 0) p = x;
        mp[{p, q}]++;
    }
    cout<<ans<<endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}

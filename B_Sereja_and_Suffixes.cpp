#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll mx = INT_MAX;
const ll mn = INT_MIN;

/* Vogoban please code ta accept korai dew >.< */

int main()
{
    ll n, m;
    cin >> n >> m ;
    ll s[n];
    for (ll i = 0 ; i < n ; i++) cin>>s[i];
    set<ll>set;
    vector<ll>v(n);
    for (ll i = n-1 ; i >= 0 ; i--) 
    {
        set.insert(s[i]);
        v[i]=set.size();
    }
    while (m--)
    {
        ll x;
        cin>>x;
        cout<<v[x-1]<<endl;
    }
    
}
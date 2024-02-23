#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back


void solve()
{
    ll n;
    cin>>n;
    vector<ll>s(n),v(n);
    for (ll i = 0 ; i < n ; i++) cin>>s[i];
    for (ll i = 0 ; i < n ; i++) cin>>v[i];
    vector<pair<ll,ll>>ans;
    ll mx=-1e9+10;
    for (ll i = 0 ; i < n ; i++)
    {
        ans.pb({s[i]-v[i],i+1});
        mx=max(mx,s[i]-v[i]);
    }
    vector<ll>c;
    for (ll i = 0 ; i < n ; i++)
    {
        if(ans[i].first==mx)
        {
            c.pb(ans[i].second);
        }
    }
    cout<<c.size()<<endl;
    for (ll i = 0 ; i < c.size() ; i++) cout<<c[i]<<" ";
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

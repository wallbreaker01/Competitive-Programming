#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fastio                        \
{                                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
}
 

void solve()
{
    ll n, k;
    cin >> n >> k ;
    ll s[n],x[n],y[n];
    vector<pair<ll,ll>>v;
    for (ll i = 0 ; i < n ; i++) 
    {
        cin>>s[i];
        v.push_back({s[i],i});
    }
    for (ll i = 0 ; i < n ; i++) cin>>x[i];
    sort(v.begin(),v.end());
    sort(x,x+n);
    for (ll i = 0 ; i < n ; i++) 
    {
        y[v[i].second]=x[i];
    }
    for (ll i = 0 ; i < n ; i++) 
    {
        cout<<y[i]<<" ";
    }
    cout<<endl;


}

int main()
{
    fastio
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}

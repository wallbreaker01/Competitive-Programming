#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back

void solve()
{
    ll n;
    cin >> n;
    vector<ll>s(n);
    vector<pair<ll,ll>> vp;
    for(ll i = 0; i < n; i++)
    {
        cin>>s[i];
        vp.pb({s[i],i});
    }
    sort(vp.rbegin(),vp.rend());
    ll mx=s[0];
    for (ll i = 0; i < vp[0].second; i++)
    {
        mx=max(mx,s[i]);
        s[i]=mx;
    }
    mx=s[n-1];
    for(ll i = n-1; i > vp[0].second; i--)
    {
        mx=max(mx,s[i]);
        s[i]=mx;
    }
    ll sum=0;
    for (ll i = 0; i < n; i++) sum+=s[i];
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
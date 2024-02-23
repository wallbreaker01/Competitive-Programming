
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n;
    cin >> n;
    ll s[n];
    map<ll,ll>m;
    for (ll i = 0 ; i < n ; i++) 
    {
        cin>>s[i];
        m[s[i]]++;
    }
    sort(s,s+n);
    ll x=s[n-1],y=s[n-2];
    if(x==y)
    {
        ll c=(n+1)/2;
        if(m[x]<=c) yes;
        else no;
        return;
    }
    if(m[y]<n-1) yes;
    else no;


}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

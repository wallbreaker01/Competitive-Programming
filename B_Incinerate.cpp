#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n,k;
    cin >> n >> k ;
    ll s1[n],s2[n],arr[n];
    vector<pair<ll,ll>>v;
    for (ll i = 0 ; i < n ; i++) cin>>s1[i];
    for (ll i = 0 ; i < n ; i++) cin>>s2[i];
    for (ll i = 0 ; i < n ; i++) v.push_back( { s1[i],s2[i] } );
    ll c=0,x=0,mn=INT_MAX;
    sort(v.begin(),v.end());
    for (ll i =n-1 ; i >= 0 ; i--)
    {
        mn=min(mn,v[i].second);
        arr[i]=mn;
    }
    for (ll i = 0 ; i < n && k>0 ; i++) 
    {
        if(v[i].first<=c+k) x++;
        else
        {
            c=c+k;
            k=k-arr[i];
            i--;
        }
    }
    if(x==n) cout<<"YES"<<endl;
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

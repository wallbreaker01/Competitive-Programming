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
    ll s[n];
    for (ll i = 0 ; i < n ; i++) cin>>s[i];
    ll v[n];
    for (ll i = 0 ; i < n ; i++) cin>>v[i];
    unordered_map<ll,ll>m1,m2;

    ll c=1;
    for(ll i = 1;i <= n ; i++)
    {
        if(i==n)
        {
            m1[s[i-1]]=max(c,m1[s[i-1]]);
            break;
        }
        if(s[i]==s[i-1]) c++;
        else
        {
            m1[s[i-1]]=max(c,m1[s[i-1]]);
            c=1;
        }

    }

    c=1;
    for(ll i = 1;i <= n ; i++)
    {
        if(i==n)
        {
            m2[v[i-1]]=max(c,m2[v[i-1]]);
            break;
        }
        if(v[i]==v[i-1]) c++;
        else
        {
            m2[v[i-1]]=max(c,m2[v[i-1]]);
            c=1;
        }
    }
    
    ll ans=0;
    for(auto i : s)
    {
        ans=max(ans,m1[i]+m2[i]);
    }
    for(auto i : v)
    {
        ans=max(ans,m1[i]+m2[i]);
    }
    cout<<ans<<endl;

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

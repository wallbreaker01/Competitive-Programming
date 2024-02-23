#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
#define fastio                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
    }



void solve()
{
    int n;bv  
    cin>>n;
    vector<pair<int,int>> v;
    for(ll i=0;i<n-1;i++)
    {
        int x,y;
        cin>>x>>y;
        v.pb({x,y});
    }
    ll ans = 0;
    unordered_set <ll> s;
    s.insert(1);
    while(s.size()<n)
    {
        ans++;
        for(auto i:v)
        {
            if(s.find(i.first)!=s.end())
            {
                s.insert(i.second);
            }
        }
    }
    cout<<ans<<endl;
}


int main()
{
    fastio-
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}

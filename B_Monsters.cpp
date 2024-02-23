#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
 

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<pair<ll,ll>> v,s;
    for(int i = 0 ; i < n ; i++)
    {
        ll x;
        cin>>x;
        v.push_back({x%k,i});
    }
    sort(v.begin(),v.end());
    vector<ll> ans;
    for(ll i = 0 ; i < n ; i++)
    {
        if(v[i].first==0) ans.push_back(v[i].second);
        else s.push_back({v[i].first, -1*v[i].second});
    }
    sort(s.begin(),s.end());
    reverse(s.begin(),s.end());
    for(ll i=0;i<ans.size();i++) cout<<ans[i]+1<<" ";
    for(ll i=0;i<s.size();i++) cout<<-1*s[i].second+1<<" ";
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

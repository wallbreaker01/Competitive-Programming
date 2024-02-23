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
    vector<pair<ll,ll>>v;
    for (ll i = 0 ; i < n ; i++) 
    {
        ll x,y;
        cin>>x>>y;
        v.pb({x,y});
    }
    sort(v.begin(),v.end());
    ll c=0;
    


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

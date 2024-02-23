#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

/* Vogoban please code ta accept korai dew >.< */

int main()
{
    ll n, m;
    cin >> n >> m ;
    vector<pair<ll,ll>>v;
    for (ll i = 0 ; i < n ; i++) 
    {
        ll a, b;
        cin >> a >> b ;
        v.push_back({a,b});
    }
    ll sum=0;
    sort(v.begin(),v.end());
    for(auto x : v)
    {
        ll price=x.first;
        ll quan=x.second;
        ll mini_q=min(quan,m);
        sum+=price*mini_q;
        m=m-mini_q;
    }
    cout<<sum<<endl;
    
    

    return 0;
}
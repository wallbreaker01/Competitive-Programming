#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n,c=1;
    cin >> n;
    map<ll,ll>m;
    for (ll i = 0 ; i < n ; i++) 
    {
        ll x;
        cin>>x;
        for (ll j = 0 ; j < x ; j++)
        {
            ll y;
            cin >> y;
            m[y]++;
        }
        //c++;
    }
    vector<ll>v;
    for (ll i = 0 ; i < m.size() ; i++) 
    {
        if(m[i]<=n)
    }


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

#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

/* Vogoban please code ta accept korai dew >.< */

int main()
{
    ll m, n;
    while(cin>>n>>m && n!=0 && m!=0)
    {
        ll s[n],v[m];
        set<ll>set;
        for (ll i = 0 ; i < n ; i++) cin>>s[i],set.insert(s[i]);
        for (ll i = 0 ; i < m ; i++) cin>>v[i],set.insert(v[i]);
        ll x=n+m-set.size();
        cout<<x<<endl;
    }
    
    
    

    
}
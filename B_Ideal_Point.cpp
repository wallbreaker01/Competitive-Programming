#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll mx = INT_MAX;
const ll mn = INT_MIN;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n, k,c=0,c2=0;
    cin >> n >> k ;
    for (ll i = 0 ; i < n ; i++) 
    {
        ll l, r;
        cin >> l >> r ;
        if(l==k) c=1;
        if(r==k) c2=1;
    }
    if(c==1 and c2==1) cout<<"YES"<<endl;
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

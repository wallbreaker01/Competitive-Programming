#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll mx = INT_MAX;
const ll mn = INT_MIN;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n,mx=0;
    cin >> n;
    ll s[n];
    for (ll i = 0 ; i < n ; i++) cin>>s[i];
    for (ll i = 0 ; i < n-1 ; i++) 
    {
        ll a=max(s[i],s[i+1])*min(s[i],s[i+1]);
        mx=max(mx,a);
    }
    cout<<mx<<endl;
    
    


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

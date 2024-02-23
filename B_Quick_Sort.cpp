#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll mx = INT_MAX;
const ll mn = INT_MIN;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n, k;
    cin >> n >> k ;
    ll s[n];
    for (ll i = 0 ; i < n ; i++) cin>>s[i];
    ll x=0,y=1;
    for (ll i = 0 ; i < n ; i++) 
    {
        if(s[i]==y) y++;
        else x++;
    }
    cout<<ceil((float)x/k)<<endl;

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

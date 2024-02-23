#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll mx = INT_MAX;
const ll mn = INT_MIN;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n;
    cin >> n;
    ll c=0;
    for (ll i = 1 ; i <= 9 ; i++) 
    {
        ll x=i;
        while(x<=n)
        {
            c++;
            x=x*10+i;
        }
    }
    cout<<c<<endl;
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

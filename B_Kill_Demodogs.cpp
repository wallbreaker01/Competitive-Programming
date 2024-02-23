#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll mx = INT_MAX;
const ll mn = INT_MIN;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll mod=1e9+7;
    ll n;
    cin >> n;
    ll sum=1,c=1,x=1;
    for (ll i = 1 ; i < n ; i++) 
    {
        x=(x+(i+1)*(2*i+1));
        x=x*2022;
        x=x%mod;
    }
    //x=x*2022;
    //x=x%mod;
    cout<<x<<endl;

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

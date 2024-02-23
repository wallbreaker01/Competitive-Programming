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
    ll s[n];
    for (ll i = 0 ; i < n ; i++) cin>>s[i];
    ll c=0;
    for (ll i = 0 ; i < n-1 ; i++) 
    {
        if( s[i]%2==0 && s[i+1]%2==0
        || s[i]%2!=0 && s[i+1]%2!=0) c++;
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

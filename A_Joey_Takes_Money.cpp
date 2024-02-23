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
    ll sum=1;
    for (ll i = 0 ; i < n ; i++) 
    {
        cin>>s[i];
        //ll x=s[i]+s[i+1];
        sum=sum*s[i];
    }
    cout<<(sum+n-1)*2022<<endl;
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

#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n;
    cin >> n;
    ll s[n];
    for (ll i = 0 ; i < n ; i++) cin>>s[i];
    sort(s,s+n);
    //ll mn=INT_MIN,mx=INT_MAX;
    ll mx=s[0],mn=s[0];
    for (ll i = 0 ; i < n ; i++) 
    {
        mn=mn & s[i];
        mx=mx | s[i];
    }
    cout<<mx-mn<<endl;

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

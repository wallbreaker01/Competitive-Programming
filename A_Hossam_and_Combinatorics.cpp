#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n,c1=0,c2=0;
    cin >> n;
    ll s[n];
    for (ll i = 0 ; i < n ; i++) cin>>s[i];
    sort(s,s+n);
    ll mn=s[0];
    ll mx=s[n-1];
    
    for (ll i = 0 ; i < n ; i++) if(s[i]==mn) c1++;
    for (ll i = 0 ; i < n ; i++) if(s[i]==mx) c2++;

    if(s[0]==s[n-1])cout<<n*(n-1)<<endl;
    else cout<<2*c1*c2<<endl;

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

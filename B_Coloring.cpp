#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n,m,k;
    cin>>n>>m>>k;
    ll s[m];
    for (ll i = 0 ; i < m ; i++) cin>>s[i];
    ll mx=*max_element(s,s+m);
    // for (ll i = 0 ; i < m ; i++) 
    // {
    //     if((k*s[i]-1)>=n)
    //     {
    //         c=1;
    //         break;
    //     }
    // }
    if(mx>(n+k-1)/k) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

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

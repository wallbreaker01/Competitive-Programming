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
    ll c=0;
    for (ll i = 0 ; i < n ; i++) cin>>s[i];
    if(n<4) cout<<n<<endl;
    else
    {
        for (ll i = 0 ; i < n-2 ; i++) 
        {
            if(s[i]!=s[i+2]) c=1;
        }
        if(c==0) cout<<1+n/2<<endl;
        else cout<<n<<endl;
    }

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

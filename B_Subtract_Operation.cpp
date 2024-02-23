
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n, k;
    cin >> n >> k ;
    set<ll>v;
    ll s[n];
    for (ll i = 0 ; i < n ; i++) 
    {
        cin >> s[i];
        v.insert(s[i]);
    }  
    ll c=0;
    for (ll i = 0 ; i < n and c==0; i++) 
    {
        if(v.count(s[i]+k))
        {
            yes;
            c=1;
        }
    }
    if(c==0) no;


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

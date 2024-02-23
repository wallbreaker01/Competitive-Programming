#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n,c=0;;
    cin >> n;
    ll s[n];
    for (ll i = 0 ; i < n ; i++) cin>>s[i];
    ll v[n];
    for (ll i = 0 ; i < n ; i++) cin>>v[i];
    for (ll i = 0 ; i < n ; i++) 
    {
        if(s[i]>v[i])
        {
            swap(s[i],v[i]);
            c++;
        }
    }
    ll x=s[n-1];
    ll y=v[n-1];
    sort(s,s+n);
    sort(v,v+n);
    if(x==s[n-1] and y==v[n-1]) yes;
    else no;


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

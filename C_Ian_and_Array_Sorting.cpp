#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n;
    cin >> n;
    ll s[n];
    for (ll i = 0 ; i < n ; i++) cin>>s[i];
    for (ll i = 1 ; i < n-1 ; i++) 
    {
        if(s[i-1]>s[i])
        {
            s[i+1]+=(s[i-1]-s[i]);
            s[i]=s[i-1];
        }
    }
    for(ll i=n-2;i>0;i--)
    {
        if(s[i]>s[i+1])
        {
            s[i-1]-=(s[i]-s[i+1]);
            s[i]=s[i+1];
        }
    }
    if(is_sorted(s,s+n)) yes;
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
    return 0;
}

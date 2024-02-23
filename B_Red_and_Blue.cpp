#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll mx = INT_MAX;
const ll mn = INT_MIN;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n,sum1=0,sum2=0,mx1=0,mx2=0;
    cin >> n;
    ll s[n];
    for (ll i = 0 ; i < n ; i++)
    {
        cin>>s[i];
        sum1=sum1+s[i];
        mx1=max(mx1,sum1);
    }
    ll m;
    cin >> m;
    ll s2[m];
    for (ll i = 0 ; i < m ; i++)
    {
        cin>>s2[i];
        sum2=sum2+s2[i];
        mx2=max(mx2,sum2);
    }
    cout<<mx1+mx2<<endl;
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

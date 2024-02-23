#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fastio                        \
{                                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
}
 

void solve()
{
    ll n;
    cin >> n;
    ll s[n];
    for (ll i = 0 ; i < n ; i++) cin>>s[i];
    sort(s,s+n);
    if(s[0]%2==1)
    {
        yes;
        return;
    }
    ll c1=0,c2=0;
    for (ll i = 0 ; i < n ; i++) 
    {
        if(s[i]%2==1) c1++;
        else c2++;
    }
    if(c1>=1) no;
    else yes;

}

int main()
{
    fastio
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}

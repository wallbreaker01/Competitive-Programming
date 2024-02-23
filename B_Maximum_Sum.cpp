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
    ll n, k;
    cin >> n >> k ;
    ll s[n],v[n];
    for (ll i = 0 ; i < n ; i++) cin>>s[i];
    sort(s,s+n);
    for (ll i = 0 ; i < n ; i++) 
    {
        v[i+1]=v[i]+s[i];
    }
    ll mx=INT_MIN;
    for (ll i = 0 ; i <= k ; i++) 
    {
        mx=max(mx,v[n-k+i]-v[2*i]);
    }
    cout<<mx<<endl;
    


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

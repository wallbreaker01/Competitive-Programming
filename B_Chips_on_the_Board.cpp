#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
 

void solve()
{
    ll n;
    cin >> n;
    ll s[n];
    ll sum1=0,sum2=0;
    for (ll i = 0 ; i < n ; i++) 
    {
        cin>>s[i];
        sum1+=s[i];
    }
    ll v[n];
    for (ll i = 0 ; i < n ; i++) 
    {
        cin>>v[i];
        sum2+=v[i];
    }
    sort(s,s+n);
    sort(v,v+n);
    ll x=min(s[0]*n+sum2,v[0]*n+sum1);
    cout<<x<<endl;



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

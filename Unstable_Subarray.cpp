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
    map<ll,ll>m;
    ll s[n];
    for (ll i = 0 ; i < n ; i++) 
    {
        cin>>s[i];
        m[s[i]]++;
    }
    ll totalsubarray=n*(n-1)/2;
    ll x = totalsubarray;
    for(auto i : m)
    {
        x = x - i.second*(i.second-1)/2;
    }
    cout<<x<<endl;
    


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

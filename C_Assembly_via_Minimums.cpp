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
    ll x=(n*(n-1))/2;
    map<ll,ll>m;
    ll s[x];
    for (ll i = 0 ; i < x ; i++) 
    {
        cin>>s[i];
        m[s[i]]++;
        
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

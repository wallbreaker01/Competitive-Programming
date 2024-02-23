#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
ll v[INT_MAX];

void solve()
{
    ll n;
    cin >> n;
    ll s[n];
    for (ll i = 0 ; i < n ; i++) cin>>s[i];
    unordered_map<ll,ll>m;
    for (ll i = 0 ; i < n ; i++) 
    {
        while(s[i]>1) 
        {
            m[v[s[i]]]++;
            s[i]/=v[s[i]];
        }
    }
    for(aut0 [x,y] : m)
    {
        if(y%n) 
        {
            no;
            return;
        }
        else yes;
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

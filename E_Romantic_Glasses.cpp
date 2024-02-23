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
    ll c=0;
    map<ll,ll>m;
    ll s[n];
    for (ll i = 0; i < n; i++) cin >> s[i];
    m[0]=1;
    ll sum=0;
    for (ll i = 0; i < n; i++)
    {
        if (i % 2 == 0) sum+=s[i];
        else sum-=s[i];
        if (m[sum]==1) c=1;
        else m[sum]++;
    }
    if (c) yes;
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

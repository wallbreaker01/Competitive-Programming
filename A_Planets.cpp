#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

void solve()
{
    ll n,c,count=0;
    cin >> n >> c ;
    ll s[n];
    map<ll,ll>m;
    for (ll i = 0 ; i < n ; i++)
    {
        cin>>s[i];
        m[s[i]]++;
        if(m[s[i]]<=c) count++;
    }
    cout<<count<<endl;
    
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

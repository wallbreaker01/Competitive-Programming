#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
#define all(c) c.begin(), c.end()
typedef long long int ll;
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll s[n],v[n],sum=0;

    for (ll i = 0 ; i < n ; i++) cin>>s[i],sum=sum+s[i];
    for (ll i = 0 ; i < n ; i++) cin>>v[i];
    sort(v,v+n); 
    for (ll i = 0 ; i < n-1 ; i++) sum=sum+v[i];
    
    cout<<sum<<endl;
   
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

#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll s[n];
    ll mn=1000000000;
    for (ll i = 0 ; i < n ; i++) cin>>s[i];
    sort(s,s+n);
    for (ll i = 0 ; i < n-2 ; i++) 
    {
        mn=min(mn,s[i+2]-s[i]);
    }
    cout<<mn<<endl;


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

#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

void solve()
{
    ll n,k;
    cin >> n >> k ;
    vector<ll>v(n);
    for (ll i = 0 ; i < n ; i++) cin>>v[i];
    sort(v.rbegin(),v.rend());
    ll sum=0;
    for (ll i = 0 ; i <= k ; i++) sum=sum+v[i];
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

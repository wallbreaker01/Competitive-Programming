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
    for (ll i = 0 ; i < n ; i++) cin>>s[i];
    if(s[0]==1) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

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

#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

void solve()
{
    ll n,x;
    cin >> n >> x ;
    ll s[2*n];
    ll c=0;
    for (ll i = 0 ; i < 2*n ; i++) 
    {
        cin>>s[i];
    }
    sort(s,s+2*n);
    for (ll i = 0 ; i < n ; i++) if(abs(s[i]-s[n+i])>=x) c++;
    if(c==n) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

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

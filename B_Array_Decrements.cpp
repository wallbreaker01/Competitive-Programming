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
    ll s[n],s2[n];
    ll dif=0,c=0;
    for (ll i = 0 ; i < n ; i++) cin>>s[i];
    for (ll i = 0 ; i < n ; i++) cin>>s2[i];

    for (ll i = 0 ; i < n ; i++) 
    {
        if(s[i]-s2[i] > dif) dif=abs(s[i]-s2[i]);
    }
    
    for (ll i = 0 ; i < n ; i++) 
    {
        if(s[i]-s2[i] < dif && s2[i]!=0)
        {
            c=1;
            break;
        }
    }
    if(c==0) cout<<"YES"<<endl;
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

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
    ll c=0;
    for (ll i = 0 ; i < n ; i++) cin>>s[i];
    sort(s,s+n);
    for (ll i = 0 ; i < n-1 ; i++) 
    {
        if(s[i]==s[i+1])
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

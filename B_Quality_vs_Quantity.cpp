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
    for (ll i = 0 ; i < n ; i++) 
    {
        cin>>s[i];
    }
    sort(s,s+n);
    ll c=0,c2=0;
    if(n%2==0)
    {
        for (ll i = 0 ; i < n/2 ; i++) 
        {
            c=c+s[i];
        }
        for (ll i = (n/2)+1 ; i < n ; i++) 
        {
            c2=c2+s[i];
        }
    }
    else
    {
        for (ll i = 0 ; i < (n/2)+1 ; i++) 
        {
            c=c+s[i];
        }
        for (ll i = (n/2)+1 ; i < n ; i++) 
        {
            c2=c2+s[i];
        }
    }
    if(c<c2) cout<<"YES"<<endl;
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

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
    string s;
    cin >> s;
    ll c1=0,c2=0,c3=0,c4=0,c=1,mx=-1;

    for (ll i = 0 ; i < n-1 ; i++) 
    {
        if(s[i]==s[i+1])
        {
            c++;
            mx=max(mx,c);
        }
        else
        {
            c=1;
            mx=max(mx,c);
        }
    }
    for (ll i = 0 ; i < n ; i++) 
    {
        if(s[i]=='1') c1++;
        else c2++;
    }
    ll x=mx*mx;
    ll y=c1*c2;
    cout<<max(x,y)<<endl;



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

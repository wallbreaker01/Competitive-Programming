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
    ll c=0;
    for (ll i = 0 ; i < n ; i+=2) 
    {
        if(s[i]!=s[i+1]) c++;
    }
    cout<<c<<endl;
    
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

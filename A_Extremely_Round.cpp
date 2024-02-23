#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    string s; 
    cin >> s; 
    string s2=""; 
    s2=s2+s[0]; 
    ll a=stoi(s2); 
    ll ans=0; 
    for (ll i = 0; i < s.size()-1; i++) ans=ans+9; 
    cout<<ans+a<<endl; 

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

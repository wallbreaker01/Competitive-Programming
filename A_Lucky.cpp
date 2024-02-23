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
    ll c1=0,c2=0;
    for (ll i = 0 ; i < 3 ; i++) 
    {
        c1=c1+s[i]-'0';
    }
    
    for (ll i = 3 ; i < 6 ; i++) 
    {
        c2=c2+s[i]-'0';
    }
    if(c1==c2) cout<<"YES"<<endl;
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

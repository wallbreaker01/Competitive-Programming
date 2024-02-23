#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll c=0;
    for (ll i = 0 ; i < n-1 ; i++) 
    {
        if(s[i] != s[i+1]) c++;
    }
    if(c!=0 && s[0]!='1') cout<<c-1<<endl;
    else cout<<c<<endl;
 
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

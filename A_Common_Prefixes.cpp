#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll mx = INT_MAX;
const ll mn = INT_MIN;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n,c=0;
    cin >> n;
    string s="aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    cout<<s<<endl;
    for (ll i = 0 ; i < n ; i++) 
    {
        ll v;
        cin >> v;
        if(s[v]=='a') s[v]='b';
        else s[v]='a';
        cout<<s<<endl;
    }


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

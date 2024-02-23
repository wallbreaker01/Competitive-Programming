#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll mx = INT_MAX;
const ll mn = INT_MIN;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n,c1=0,c2=0;
    cin >> n;
    string s;
    cin>>s;
    for (ll i = 0 ; i < s.size() ; i++)
    {
        if(s[i]=='0') c1++;
        else c2++;
    }
    if(c1>=c2) cout<<c2<<endl;
    else cout<<c1+1<<endl;

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

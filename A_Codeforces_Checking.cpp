#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll mx = INT_MAX;
const ll mn = INT_MIN;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    char c;
    cin >> c;
    string x="codeforces";
    ll count=0;
    for(ll i=0;i<x.size();i++)
    {
        if(x[i]==c)
        {
            count=1;
            break;
        }
    }
    if(count) cout<<"YES"<<endl;
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

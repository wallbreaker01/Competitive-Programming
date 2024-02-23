#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll mx = INT_MAX;
const ll mn = INT_MIN;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll x,y,z;
    cin>>x>>y>>z;
    if(x<y && x<z) cout<<"ALICE"<<endl;
    else if(y<x && y<z) cout<<"BOB"<<endl;
    else cout<<"CHARLIE"<<endl;
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

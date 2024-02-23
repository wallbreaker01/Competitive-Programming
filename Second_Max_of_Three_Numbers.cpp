#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll mx = INT_MAX;
const ll mn = INT_MIN;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll a,b,c;
    cin>>a>>b>>c;
    if(a>=b && a>=c)
    {
        if(b>=c) cout<<b<<endl;
        else cout<<c<<endl;
    }
    else if(b>=a && b>=c)
    {
        if(a>=c) cout<<a<<endl;
        else cout<<c<<endl;
    }
    else if(a>=b) cout<<a<<endl;
    else cout<<b<<endl;


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

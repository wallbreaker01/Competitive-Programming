#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll mx = INT_MAX;
const ll mn = INT_MIN;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll x, y;
    cin >> x >> y ;
    ll a=0,b;
    if(y>x)
    {
        a=y-x;
        cout<<x+a*2<<endl;
    }
    else cout<<y<<endl;
    


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

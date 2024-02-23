#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define babusuna main
#define to_sowmik_roy 0;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    if((a+1)%b==(c+1)%d) cout<<1<<endl;
    else
    {
        ll x = lcm(b,d);
        cout<<x-(a%b)<<endl;
    }


}

int babusuna()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return to_sowmik_roy;
}

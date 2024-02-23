#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll mx = INT_MAX;
const ll mn = INT_MIN;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll a,b,c,x;
    cin>>a>>b>>c>>x;
    if(a+b>=x or a+c>=x or b+c>=x) cout<<"YES"<<endl;
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

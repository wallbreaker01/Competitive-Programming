#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n;
    cin >> n;
    if(n==2) cout<<2<<endl;
    else if(n%2==0) cout<<0<<endl;
    else cout<<1<<endl;
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

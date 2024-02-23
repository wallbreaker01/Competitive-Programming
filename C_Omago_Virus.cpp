#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll mx = INT_MAX;
const ll mn = INT_MIN;

/* Vogoban please code ta accept korai dew >.< */

ll calculate(ll p,ll q)
{
    ll mod=998244353,a;
    a=mod-2;
    while(a)
    {
        if(a&1) p=(p*q)%mod;
        q=(q*q)%mod;
        a>>=1;
    }
    return p;
}

void solve()
{
    ll n,k,m,x,c=0,y,z=0;
    //ll  MX=998244353;
    cin>>n>>k>>m;
    y=m;
    while(n>0)
    {
        
        y=y*k;
        z=z+m+y;
        n=n-z;
        c++;

    }
    //ll x=n-m;
    
    //if(x<k) cout<<1<<endl;
    cout<<calculate(6,)<<endl;


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

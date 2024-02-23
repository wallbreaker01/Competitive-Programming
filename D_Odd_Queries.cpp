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
    ll n, q,sum=0,sum2=0;
    cin >> n >> q ;
    vector<ll>v(n+1,0);
    for (ll i = 1 ; i <= n ; i++)
    {
        cin>>v[i];
        sum+=v[i];
        v[i]=sum;
    }
    while(q--)
    {
        ll l,r,k;
        cin>>l>>r>>k;
        sum2=sum;
        sum2=sum2-v[r]+v[l-1];
        ll x=k*(r-l+1);
        sum2+=x;
        if(sum2%2==0) no;
        else yes;
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

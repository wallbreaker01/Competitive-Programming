#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define babusuna main
#define to_sowmik_roy 0;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
const ll N=1e6+10;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n;
    cin >> n;
    ll s[N];
    ll c=1;
    for (ll i = 0 ; i < n*n ; i+=2) 
    {
        s[i]=c;
        c++;
    }
    for (ll i = 1 ; i < n*n ; i+=2) 
    {
        s[i]=c;
        c++;
    }
    ll x=0;
    for (ll i = 0 ; i < n*n ; i++) 
    {
        cout<<s[i]<<" ";
        x++;
        if(x%n==0) cout<<endl;
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

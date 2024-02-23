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
    ll n;
    cin >> n;
    map<ll,ll>m;
    ll s[n];
    for (ll i = 0 ; i < n ; i++) 
    {
        cin>>s[i];
        m[s[i]]++;
    }
    // ll a=v.size();
    // if(a==n) cout<<n-1<<endl;
    // else if(a<n) cout<<a-1<<endl;
    ll mx=0;
    for (ll i = 0 ; i < m.size() ; i++) 
    {
        mx=max(mx,m[i]);
    }
    cout<<n-mx<<endl;
    

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

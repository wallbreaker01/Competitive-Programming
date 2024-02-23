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
    ll n,c=0;
    cin >> n;
    ll s[n];
    for (ll i = 0 ; i < n ; i++) cin>>s[i];
    ll v[n];
    for (ll i = 0 ; i < n ; i++) cin>>v[i];
    for (ll i = 0 ; i < n ; i++) 
    {
        if(s[i]<=2*v[i] and v[i]<=2*s[i]) c++;
    }
    cout<<c<<endl;
    
    


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

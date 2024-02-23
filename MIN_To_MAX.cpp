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

    ll s[n];
    for (ll i = 0 ; i < n ; i++) 
    {
        cin>>s[i];
    }
    sort(s,s+n);
    ll min = s[0];
    ll c=0;
    for (ll i = 0 ; i < n ; i++) 
    {
        if(s[i]>s[0]) c++;
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

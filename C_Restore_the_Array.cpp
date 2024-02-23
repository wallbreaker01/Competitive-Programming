
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n;
    cin >> n;
    ll s[n];
    for (ll i = 0 ; i < n-1 ; i++) cin>>s[i];
    vector<ll>v;
    for (ll i = 0 ; i < n-2 ; i++) 
    {
        v.push_back(min(s[i],s[i+1]));
    }
    cout<<s[0]<<" ";
    for(auto x : v) cout<<x<<" ";
    cout<<s[n-2]<<endl;


}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

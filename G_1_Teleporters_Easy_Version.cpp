#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll mx = INT_MAX;
const ll mn = INT_MIN;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n,c;
    cin>>n>>c;
    ll s[n];
    vector<ll>v;
    for(ll i=0;i<n;i++) 
    {
        cin>>s[i];
        v.push_back(s[i]+i+1); //(i+1) for movvie to teleported place
    }
    sort(v.begin(),v.end());
    ll count=0;
    for(ll i=0;i<n;i++)
    {
        if(c>=v[i])
        {
            c=c-v[i];
            count++;
        }
    }
    cout<<count<<endl;


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

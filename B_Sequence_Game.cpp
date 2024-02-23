#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
 

void solve()
{
    ll n;
    cin >> n;
    vector<ll>v(n),ans;    
    for (ll i = 0 ; i < n ; i++) cin>>v[i];
    ans.pb(v[0]);
    for(ll i = 1 ; i < n ; i++)
    {
        if(v[i-1]>v[i])
        {
            ans.pb(1);
            ans.pb(v[i]);
        }
        else ans.pb(v[i]);
    }
    cout<<ans.size()<<endl;
    for (ll i = 0 ; i < ans.size() ; i++) 
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    
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

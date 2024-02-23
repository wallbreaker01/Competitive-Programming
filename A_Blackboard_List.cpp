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
    ll s[n];
    vector<ll>v;
    for (ll i = 0 ; i < n ; i++)
    {
        cin>>s[i];
        v.pb(s[i]);
    }
    
    for (ll i = 0 ; i < n ; i++) 
    {
        if(s[i]<0)
        {
            cout<<s[i]<<endl;
            return;
        }
        
    }
    sort(v.begin(),v.end());
    cout<<v[v.size()-1]<<endl;
    


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

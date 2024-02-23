#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
 

void solve()
{
    ll n,x;
    cin >> n;
    map<ll,ll>m;
    vector<ll>v(n+1);
    for (ll i = 0 ; i < n ; i++) 
    {
        cin>>x;
        if(x<=n) m[x]++;
    }
    for (ll i = 1 ; i <= n ; i++) 
    {
        for (ll j = i ; j <= n ; j+=i)
        {
            v[j]+=m[i];
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

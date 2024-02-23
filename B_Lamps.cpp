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
    vector<ll>s(n+1),v(n+1);
    map<ll,vector<ll>>m;
    for (ll i = 1 ; i <= n ; i++) 
    {
        cin>>s[i]>>v[i];
        m[s[i]].push_back(v[i]);
    }
    for (ll i = 1 ; i <= n ; i++) sort(m[i].begin(),m[i].end());

    for (ll i = 1 ; i <= n ; i++) reverse(m[i].begin(),m[i].end());

    ll c=0;
    for (ll i = 1 ; i <= n ; i++)
    {
        for (ll j = 0 ; j < i and j < m[i].size() ; j++)
        {
            c+=m[i][j];
        }
    }
    cout<<c<<endl;
    


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

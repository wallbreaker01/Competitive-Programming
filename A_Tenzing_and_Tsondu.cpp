#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
 

void solve()
{
    ll n, m , c=0, x=0;
    cin >> n >> m ;
    ll s[n];
    for (ll i = 0 ; i < n ; i++) 
    {
        cin>>s[i];
        c+=s[i];
    }
    ll v[m];
    for (ll i = 0 ; i < m ; i++) 
    {
        cin>>v[i];
        x+=v[i];
    }
    if(c>x) cout<<"Tsondu"<<endl;
    else if(c<x) cout<<"Tenzing"<<endl;
    else cout<<"Draw"<<endl;
    


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

#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll sum=0,sum2=0;
    vector<ll>v,v2;
    ll s[n];
    for (ll i = 0 ; i < n ; i++) //cin>>s[i];
    {
        ll x;
        cin>>x;
        if( x>=-1 ) v.push_back(x);
        else v2.push_back(x);
    }
    
    for (ll i = 0 ; i < v.size() ; i++) 
    {
        sum=sum+v[i];
    }
    for (ll i = 0 ; i < v2.size() ; i++) 
    {
        sum2=sum2+v2[i];
    }
    ll a=abs(sum+sum2);
    cout<<a<<endl;
    


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

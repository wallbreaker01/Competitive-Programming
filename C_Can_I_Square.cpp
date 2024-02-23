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
    ll c=0;
    for (ll i = 0 ; i < n ; i++) 
    {
        cin>>s[i];
        c+=s[i];
    }
    ll a=sqrt(c);
    if(a*a==c) yes;
    else no;
    
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

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
    ll c,x;
    for (ll i = 0 ; i < n ; i++) cin>>s[i];
    for (ll i = 0 ; i < n ; i++) 
    {
        if(s[i]==1 )
        {
            c=i;
            break;
        }
    }
        for (ll i = n-1 ; i >= 0 ; i--) 
    {
        if(s[i]==1 )
        {
            x=i;
            break;
        }
    }
    ll y=0;
    for (ll i = c ; i < x ; i++) 
    {
        if(s[i]==0) y++;
    }
    cout<<y<<endl;
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

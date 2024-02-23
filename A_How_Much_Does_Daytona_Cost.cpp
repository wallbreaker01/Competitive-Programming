#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
 

void solve()
{
    ll n, k;
    cin >> n >> k ;
    ll c=0;
    ll s[n];
    for (ll i = 0 ; i < n ; i++) 
    {
        cin>>s[i];
    }
    for (ll i = 0 ; i < n ; i++) 
    {
        if(s[i]==k) 
        {
            yes;
            return;
        }
    }
    no;
    
    


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

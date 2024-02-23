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
    for (ll i = 0 ; i < n ; i++) cin>>s[i];
    ll c=1;
    for (ll i = 1 ; i < n ; i++) 
    {
        if(s[i]<s[i-1])
        {
            if(i!=1 and i!=2 and i!=4 and i!=8 and i!=16) c=0;
        }
    }
    if(c) yes;
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

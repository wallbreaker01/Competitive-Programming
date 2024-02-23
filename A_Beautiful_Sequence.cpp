
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n,c=0;
    cin >> n;
    ll s[n];
    for (ll i = 1 ; i <= n ; i++) 
    {
        cin>>s[i];
        if(s[i]<=i) c=1;
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
    return 0;
}

#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll mx = INT_MAX;
const ll mn = INT_MIN;

/* Vogoban please code ta accept korai dew >.< */

int main()
{
    ll n,p,q,r,s;
    cin>>n>>p>>q>>r>>s;
    ll str[n];
    r=r-1;
    for (ll i = 0 ; i < n ; i++) cin>>str[i];
    for (ll i = p-1 ; i <= q-1 ; i++) 
    {
        swap(str[i], str[r]);
        r++;        
    }
    for (ll i = 0 ; i < n ; i++) cout<<str[i]<<" ";
      
}
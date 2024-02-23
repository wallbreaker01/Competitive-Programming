#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll mx = INT_MAX;
const ll mn = INT_MIN;

/* Vogoban please code ta accept korai dew >.< */

int main()
{
    ll n, m,c=0;
    cin >> n >> m ;
    ll s[n];
    for (ll i = 0 ; i < n ; i++) cin>>s[i];
    ll s2[m];
    for (ll i = 0 ; i < m ; i++) cin>>s2[i];
    for (ll i = 0 ; i < m ; i++) 
    {
        c+=s[s2[i]-1];
    }
    cout<<c<<endl;
    
    

    
}
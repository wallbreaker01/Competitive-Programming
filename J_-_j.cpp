#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

/* Vogoban please code ta accept korai dew >.< */

int main()
{
    ll t;
    cin >> t;
    for (ll i = 1 ; i <= t ; i++) 
    {
        ll n, k, p;
        cin >> n >> k >> p;
        ll x=(k+p);
        while(x>n) x=x-n;
        cout<<"Case "<<i<<": "<<x<<endl;
    }
   
}
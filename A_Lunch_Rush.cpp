#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

/* Vogoban please code ta accept korai dew >.< */

int main()
{
    ll n,k;
    cin >> n >> k ;
    ll ans,mx=-10000000000000;
    while(n--)
    {
        ll f,t;
        cin >> f >> t ;
        if(t>=k) ans=f-(t-k);
        else ans=f;
        mx=max(ans,mx);
    }
    cout<<mx<<endl;
    
}
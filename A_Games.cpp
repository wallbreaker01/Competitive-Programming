#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

/* Vogoban please code ta accept korai dew >.< */

int main()
{
    ll n,c=0;
    cin >> n;
    ll s[n],v[n];
    for (ll i = 0 ; i < n ; i++) cin>>s[i]>>v[i];
    for (ll i = 0 ; i < n ; i++) 
    {
        for (ll j = 0 ; j < n ; j++)
        {
            if(s[i]==v[j]) c++;
        }
    }
    cout<<c<<endl;

    
}
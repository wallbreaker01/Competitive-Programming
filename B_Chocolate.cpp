#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

/* Vogoban please code ta accept korai dew >.< */

int main()
{
    ll n,x=1;
    cin >> n;
    ll s[n];
    vector<ll>v;
    for (ll i = 0 ; i < n ; i++)
    {
        cin>>s[i];
        if(s[i]==1) v.push_back(i);
    } 
    if(v.size()==0) cout<<0<<endl;
    else
    {
        for (ll i = 1 ; i < v.size() ; i++) 
        {
            x=x*(v[i]-v[i-1]);
        }
        cout<<x<<endl;
        
    }
    
    

    
}
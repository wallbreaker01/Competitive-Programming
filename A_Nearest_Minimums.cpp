#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

/* Vogoban please code ta accept korai dew >.< */

int main()
{
    ll n,x, minn=99999999999;
    cin >> n;
    ll s[n];
    vector<ll>v;
    for (ll i = 0 ; i < n ; i++)
    {
        cin>>s[i];
        minn=min(s[i],minn);
    }
    for (ll i = 0 ; i < n ; i++) 
    {
        if(s[i]==minn) v.push_back(i+1); //minimuun number er index gula push korram
    }
    minn=99999999999;
    for (ll i = 0 ; i < v.size() ; i++) 
    {
        x=abs(v[i]-v[i+1]);
        minn=min(x,minn);
    }
    cout<<minn<<endl;
   
}
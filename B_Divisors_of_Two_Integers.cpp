#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;


int main()
{
    ll n;
    cin >> n;
    ll s[n];
    for (ll i = 0 ; i < n ; i++) cin>>s[i];
    vector<ll>v;
    sort(s,s+n,greater<ll>());
    for (ll i = 0 ; i < n-1 ; i++) 
    {
        if(s[i]==s[i+1] || s[0]%s[i]!=0) v.push_back(s[i]);
    }
    sort(v.rbegin(),v.rend());
    cout<<s[0]<<" "<<v[0]<<endl;
    

    
}
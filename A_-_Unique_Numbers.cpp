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
    sort(s,s+n);
    ll c=0;
    for (ll i = 0 ; i < n-1 ; i++) 
    {
        if(s[i]==s[i+1]) c++;
    }
    cout<<n-c<<endl;
       
}
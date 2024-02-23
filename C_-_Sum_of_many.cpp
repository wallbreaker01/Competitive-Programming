#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;


int main()
{
    ll n,x;
    cin >> n >> x ;
    map<ll,ll>m;
    ll c=0,sum=0;
    ll s[n];
    for (ll i = 0 ; i < n ; i++) cin>>s[i];
    for (ll i = 0 ; i < n ; i++) 
    {
        sum=sum+s[i];
        if(sum==x) c++;
        
    }
    

    
}
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
    ll sum=0;
    for (ll i = 0 ; i < n-1 ; i++) 
    {
        sum=sum+abs(s[i]-s[i+1])+2;
    }
    cout<<sum+s[0]+1;

    
}
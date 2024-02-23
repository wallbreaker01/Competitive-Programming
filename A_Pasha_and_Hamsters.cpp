#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

/* Vogoban please code ta accept korai dew >.< */

int main()
{
    ll n,a,b;
    cin>>n>>a>>b;
    ll s[n],arr[n],brr[n];
    for (ll i = 0 ; i < a ; i++) cin>>arr[i];

    for (ll i = 0 ; i < b ; i++) cin>>brr[i];
    
    for (ll i = 0 ; i < a ; i++) s[arr[i]-1]=1; //arthur er gula 1 diya mark krlm ar alex er ta 2 diya
    
    for (ll i = 0 ; i < b ; i++) s[brr[i]-1]=2;

    for (ll i = 0 ; i < n ; i++) cout<<s[i]<<" ";
       
}
#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

/* Vogoban please code ta accept korai dew >.< */

int main()
{
    ll n,k,s[900000];
    cin >> n >> k ;
    s[0]=1;
    for (ll i = 1 ; i <= n ; i++) cin>>s[i];
    sort(s,s+n+1);
    if(s[k]==s[k+1]) cout<<"-1"<<endl;
    else cout<<s[k]<<endl;
   
}
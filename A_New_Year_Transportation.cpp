#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;


int main()
{
    ll n,t;
    cin >> n >> t ;
    ll s[n];
    for (ll i = 1 ; i < n ; i++) cin>>s[i];
    ll c=1;
    while(c<t) c=c+s[c];

    if(c==t) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    

}
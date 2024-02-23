#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;



int main()
{
    ll n,l;
    cin >> n >> l ;
    ll s[n];
    for (ll i = 0 ; i < n ; i++) cin>>s[i];
    sort(s,s+n);
    ll d=0,mx;
    for (ll i = 0 ; i < n-1 ; i++) 
    {
        if(s[i+1]-s[i]>d) d=s[i+1]-s[i];
    }
    mx=2*max(s[0],l-s[n-1]);
    mx=max(d,mx); 
    printf("%.10f\n",(double)mx/2);
}

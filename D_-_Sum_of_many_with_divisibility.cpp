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
    ll c=0,sum=0;
    map<ll,ll>m;
    ll s[n];
    for (ll i = 0 ; i < n ; i++) cin>>s[i];
    m[0]=1;
    for (ll i = 0 ; i < n ; i++) 
    {
        sum=(sum+s[i])%n;
        if(sum<0) sum=sum+n;
        c=c+m[sum];
        m[sum]++;
    }
    cout<<c<<endl;    

    
}
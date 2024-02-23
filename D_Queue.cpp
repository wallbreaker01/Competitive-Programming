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
    ll c=0,sum=0;
    for (ll i = 0 ; i < n ; i++) 
    {
        if(sum<=s[i]) 
        {
            c++;
            sum=sum+s[i];
        }
    }
    cout<<c<<endl;
 
}
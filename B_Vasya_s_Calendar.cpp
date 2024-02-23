#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;


int main()
{
    ll d,n;
    cin >> d >> n ;
    ll s[n];
    ll sum=0;
    for (ll i = 0 ; i < n ; i++) cin>>s[i];
    for (ll i = 0 ; i < n-1 ; i++) 
    {
        sum=sum+d-s[i];
    }
    cout<<sum<<endl;
    
    

    
}
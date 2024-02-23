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
    ll sum=0,sum2=0,sum3=0;
    ll s[n];
    for (ll i = 0 ; i < n ; i++)
    {
        cin>>s[i];
        sum+=s[i];
    }
    ll s2[n-1];
    for (ll i = 0 ; i < n-1 ; i++)
    {
        cin>>s2[i];
        sum2+=s2[i];
    }
    ll s3[n-2];
    for (ll i = 0 ; i < n-2 ; i++)
    {
        cin>>s3[i];
        sum3+=s3[i];
    }
    cout<<sum-sum2<<endl;
    cout<<sum2-sum3<<endl;
   
}
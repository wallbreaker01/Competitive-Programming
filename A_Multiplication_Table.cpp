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
    ll c=0;
    for (ll i = 1; i <= n ; i++) 
    {
        if(x/i<=n && x%i==0) c++;
    }
    cout<<c<<endl;
    
    

    
}
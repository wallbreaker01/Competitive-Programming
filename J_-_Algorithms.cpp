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
    ll s[n];
    for (ll i = 0 ; i < n ; i++) cin>>s[i];
    sort(s,s+n);
    ll sum=0,c=0;
    for (ll i = 0 ; i < n ; i++) 
    {
        sum=sum+s[i];
        if(sum<=x) c++;
        else break;
        
        
    }

    
    cout<<c<<endl;
    
    

    
}
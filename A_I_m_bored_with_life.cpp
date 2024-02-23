#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;


int main()
{
    ll a,b,x=1,y=1;
    cin >> a >> b ;
    for ( ll i = 1 ; i <= a ; i++) x=x*i;

    for ( ll i = 1 ; i <= b ; i++) y=y*i;
    
    if(a>b) cout<<y<<endl;
    else if(a<=b) cout<<x<<endl;
   
}
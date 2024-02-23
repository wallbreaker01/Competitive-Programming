#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;


int main()
{
    ll a,b;
    cin>>a>>b;
    ll c=0,c2=0,c3=0;
    for(ll i=1;i<=6;i++)
    {
        if(abs(a-i) < abs(b-i)) c++;
        else if(abs(a-i) > abs(b-i)) c2++;
        else c3++;
    }
    cout<<c<<" "<<c3<<" "<<c2<<endl;

    
}
#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;


int main()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll x=max(3*a/10,a-(a/250)*c);
    ll y=max(3*b/10,b-(b/250)*d);
    if(x<y) cout<<"Vasya"<<endl;
    else if(x>y) cout<<"Misha"<<endl;
    else cout<<"Tie"<<endl;
        
}
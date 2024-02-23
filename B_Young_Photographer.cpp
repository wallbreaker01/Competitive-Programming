#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;


int main()
{
    ll n,c;
    cin>>n>>c;
    ll x=0,y=10000;
    while(n--)
    {
        ll a,b;
        cin >> a >> b ;
        if(a>b) swap(a,b);
        x=max(a,x);
        y=min(b,y);
    }
    if(x>y) cout<<"-1"<<endl;
    else if(c>=x && c<=y) cout<<"0"<<endl;
    else if(x>c)cout<<x-c<<endl;
    else cout<<c-y<<endl;

    


}

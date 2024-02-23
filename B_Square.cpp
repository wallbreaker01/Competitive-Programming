#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

void solve()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll mx1=max(a,b);
    ll mx2=max(c,d);
    ll mn1=min(a,b);
    ll mn2=min(c,d);
    ll x=a*b + c*d;
    ll y=sqrt(x);
    if(y*y==x && mx1==mx2 && mn1+mn2==mx1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}

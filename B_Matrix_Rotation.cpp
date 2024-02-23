#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    if( (a<b) && (c>d) || 
        (a>b) && (c<d) ||
        (a>c) && (b<d) ||
        (a<c) && (b>d) )
    cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    
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

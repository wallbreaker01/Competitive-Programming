#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll x1,x2,x3,y1,y2,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    /*
    ll s[100],v[100];
    for (ll i = 0 ; i < 3 ; i++) cin>>s[i]>>v[i];
    if(s[0]!=s[1] && s[0]!=s[2] && s[1]!=s[2] ) cout<<"YES"<<endl;
    else if(v[0]!=v[1] && v[0]!=v[2] && v[1]!=v[2]) cout<<"YES"<<endl;
    */
    if ((x1 == x2 || x2 == x3 || x3 == x1) && 
        (y1 == y2 || y2 == y3 || y3 == y1)) cout<<"NO"<<endl;
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


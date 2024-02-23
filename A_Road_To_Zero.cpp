#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll x,y,a,b;
    cin >> x >> y >> a >> b;
    ll mn=min(x,y);
    ll c1=(x+y)*a; //sobgula eksathe hisab
    ll dif=abs(x-y);
    ll c2=dif*a+mn*b; //minimum ta eksathe hisab ar baki za thake ta ekta ekta kore hisab
    cout<<min(c1,c2)<<endl;
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

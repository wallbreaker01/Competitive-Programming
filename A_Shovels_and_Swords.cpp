#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

void solve()
{
    ll a,b;
    cin >> a>>b;
    ll c=(a+b)/3;
    ll ans = min({a,b,c});
    cout<<ans<<endl;

/*  !!we can do this this way!!

    ll ans=(a+b)/3;
    if(a<b && ans>a) cout<<a<<endl;
    else if(a>b && ans>b) cout<<b<<endl;
    else cout<<ans<<endl;
*/

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



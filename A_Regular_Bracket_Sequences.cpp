#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n;
    cin >> n;
    for (ll i = 0 ; i < n ; i++) 
    {
        for (ll j = 0 ; j < i+1 ; j++) cout<<"(";
        for (ll j = 0 ; j < i+1 ; j++) cout<<")";
        for (ll j = i+1 ; j < n ; j++) cout<<"()";
        cout<<endl;
    }


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

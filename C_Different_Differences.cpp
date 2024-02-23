#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll k,n;
    cin>>k>>n;
    ll x=1;
    cout<<1<<" ";
    for(ll i = 1 ; i < k ; i++)
    {
        if(n-x+1>=k) x=x+i;
        else x++;
        cout<<x<<" ";
    }
    cout<<endl;

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

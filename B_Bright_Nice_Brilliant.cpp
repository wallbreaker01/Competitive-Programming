#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    for (ll i = 1 ; i <= n ; i++) 
    {
        for (ll j = 1 ; j <= i ; j++)
        {
            if(j==i || j==1) cout<<1<<" ";
            else cout<<0<<" ";
        }
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

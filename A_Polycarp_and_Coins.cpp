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
    ll x=n/3;
    ll y=(n-x+1)/2;
    if(x+2*y==n) cout<<x<<" "<<y<<endl;
    else cout<<y<<" "<<x<<endl;

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

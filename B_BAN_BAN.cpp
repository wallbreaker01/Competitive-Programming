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
    cout<<(n+1)/2<<endl;
    for (ll i = 0 ; i < (n+1)/2 ; i++) 
    {
        cout<<i*3+1<<" "<<n*3-(i*3+1)+1<<endl;
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

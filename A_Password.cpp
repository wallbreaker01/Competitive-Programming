#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

int fact(int n)
{
    if (n == 0 || n == 1)
    return 1;
    else
    return n * fact(n - 1);
}

void solve()
{
    ll n;
    cin >> n;
    ll s[n];
    for (ll i = 0 ; i < n ; i++) cin>>s[i];
    ll a=10-n;
    ll com=fact(a)/(fact(2)*fact(a-2));
    cout<<com*6<<endl;


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

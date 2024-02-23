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
    ll c=0;
    for (ll i = 0 ; i <= n ; i++) 
    {
        for (ll j = 0 ; j <= n ; j++)
        {
            if(i*3+j*7==n)
            {
                c=1;
                break;
            }
        }
    }
    if(c) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    


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

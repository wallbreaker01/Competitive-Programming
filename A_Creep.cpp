#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

void solve()
{
    ll a,b;
    cin >> a >> b ;
    // for (ll i = 0 ; i < min(a,b) ; i++) 
    // {
    //     cout<<"10";
    // }
    // for (ll i = 0 ; i < abs(a-b) ; i++) 
    // {
    //     if(a>b) cout<<"0";
    //     else cout<<"1";
    // }
    // cout<<endl;
    while(a > 0 || b > 0)
    {
        if(a>0)
        {
            cout<<0;
            a--;
        }
        if(b>0)
        {
            cout<<1;
            b--;
        }
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

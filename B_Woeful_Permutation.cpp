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
    if(n%2==0)
    {
        for (ll i = 0 ; i < n ; i=i+2) 
        {
            cout<<i+2<<" "<<i+1<<" ";
        }
    }
    else
    {
        cout<<"1 ";
        for (ll i = 1 ; i < n ; i=i+2) 
        {
            cout<<i+2<<" "<<i+1<<" ";
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

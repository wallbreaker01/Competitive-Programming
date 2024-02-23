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
    ll s[n];
    for (ll i = 1 ; i <= n ; i++) 
    {
        cin>>s[i];
    }
    ll max=INT_MIN;
    ll index=-1;
    for (ll i = 1 ; i <= n ; i++) 
    {
        if(s[i]>max)
        {
            max=s[i];
            index=i;
        }
    }
    cout<<index<<endl;



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

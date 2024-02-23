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
    cout<<n<<endl;
    ll s[n];
    for (ll i = 1 ; i <= n ; i++) 
    {
        s[i]=i;
        cout<<s[i]<<" ";
    }
    cout<<endl;
    for (ll i = 2 ; i <= n ; i++) 
    {
        swap(s[i],s[i-1]);
        for (ll j = 1 ; j <=n ; j++)
        {
            cout<<s[j]<<" ";
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

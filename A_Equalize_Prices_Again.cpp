#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

void solve()
{
    ll n , sum = 0;
    cin >> n;
    vector<ll>v;
    for (ll i = 0 ; i < n ; i++) 
    {
        ll x;
        cin >> x;
        v.push_back(x);
        sum=sum+v[i];
    }
    if(sum%n==0) cout<<sum/n<<endl;
    else cout<<sum/n+1<<endl;
    
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

#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;


int main()
{
    ll n,t;
    cin >> n >> t ;
    multiset<ll>s;
    for (ll i = 0 ; i < n ; i++) 
    {
        ll x;
        cin>>x;
        s.insert(x);
    }
    while(t--)
    {
        ll m;
        cin >> m;
        auto it=s.upper_bound(m);
        if(it==s.begin()) cout<<"-1"<<endl;
        else
        {
            cout<<*--it<<endl;
            s.erase(it);
        }
    }
}
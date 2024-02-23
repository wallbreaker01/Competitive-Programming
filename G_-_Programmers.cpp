#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;


int main()
{
    ll n;
    cin >> n;
    vector<pair<ll,ll>>v;
    for (ll i = 1 ; i <= n ; i++)
    {
        ll a,b;
        cin >> a >> b ;
        v.push_back(make_pair(b,a));
    }
    sort(v.begin(),v.end());
    ll ass=0,c=0;
    for(auto num:v)
    {
        if(num.second>=ass)
        {
            ass=num.first;
            c++;
        }
    }
    cout<<c<<endl;
 
}
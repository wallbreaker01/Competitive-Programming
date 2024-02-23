#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define babusuna main
#define to_sowmik_roy 0;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

/* Vogoban please code ta accept korai dew >.< */

int babusuna()
{
    ll n;
    cin >> n;
    vector<ll>v,s;
    for (ll i = 0 ; i < n ; i++) 
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    auto a=min_element(v.begin(),v.end());
    ll min=*a;
    ll b=a-v.begin();
    if(v[b-1]<v[b+1])
    {
        for (ll i = b ; i >= 0  ; i--) 
        {
            cout<<v[i]<<" ";
        }
        for (ll i = b+1 ; i < v.size() ; i++) 
        {
            cout<<v[i]<<" ";;
        }
    }
    else
    {
        for (ll i = b ; i < v.size() ; i++) 
        {
            cout<<v[i]<<" ";
        }
        for (ll i = 0 ; i < b ; i++) 
        {
            cout<<v[i]<<" ";
        }
    }
    
    //for(auto x : s) cout<<x<<" ";

    

    return to_sowmik_roy;
}
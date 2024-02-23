#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
 

int main()
{
    ll n,x;
    cin >> n;
    vector<ll>v;
    for (ll i = 0 ; i < n ; i++) 
    {
        cin>>x;
        auto c=lower_bound(v.begin(),v.end(),x);
        if(c==v.end()) v.pb(x);
        else v[c-v.begin()]=x;
    }
    cout<<v.size()<<endl;


}



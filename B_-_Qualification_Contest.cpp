#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll mx = INT_MAX;
const ll mn = INT_MIN;

/* Vogoban please code ta accept korai dew >.< */

int main()
{
    ll n,k;
    cin>>n>>k;
    vector<string>v;
    for(ll i=0;i<n;i++)
    {
        string s;
        cin>>s;
        if(k>i) v.push_back(s);        
    }
    sort(v.begin(),v.end());
    for(auto x:v) cout<<x<<endl;

    

    
}
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll mx = INT_MAX;
const ll mn = INT_MIN;

/* Vogoban please code ta accept korai dew >.< */

int main()
{
    int t;
    cin>>t;
    for (ll i = 1 ; i <= t ; i++)
    {
        ll p,s,r;
        cin>>p>>s>>r;
        if(p==s and r!=1) cout<<"Case "<<i<<": "<<"No"<<endl;
        else cout<<"Case "<<i<<": "<<"Yes"<<endl;
    }
}

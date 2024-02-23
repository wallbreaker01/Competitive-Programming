#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll mx = INT_MAX;
const ll mn = INT_MIN;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n;
    cin >> n;
    if(n%2==1) cout<<-1<<endl;
    else
    {
        vector<ll>v;
        for (ll i = 1 ; i <= n/2 ; i++) 
        {
            if(i%2==1) v.push_back(i);
            else v.push_back(-1*i);
        }
        for (ll i = 0 ; i < v.size() ; i++) cout<<v[i]<<" ";
        reverse(v.begin(),v.end());
        for (ll i = 0 ; i < v.size() ; i++) cout<<-1*v[i]<<" ";
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

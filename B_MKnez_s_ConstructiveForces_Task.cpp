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
    if(n==3) cout<<"NO"<<endl;
    else if(n%2==0)
    {
        cout<<"YES"<<endl;
        ll c=n/2;
        for (ll i = 0 ; i < n/2 ; i++) 
        {
            cout<<-c<<" "<<c<<" ";
            cout<<endl;
        }
    }
    else
    {
        cout<<"YES"<<endl;
        ll c=n/2;
        for (ll i = 0 ; i < n/2 ; i++) 
        {
            cout<<1-c<<" "<<c<<" ";
        }
        cout<<1-c<<endl;
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

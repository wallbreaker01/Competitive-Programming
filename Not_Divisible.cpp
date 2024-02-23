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
    for (ll i = 0 ; i < n-1 ; i++) 
    {
        if((i+1)%2==0) cout<<"1"<<" ";
        else cout<<"2"<<" ";
    }
    if(n%2==0) cout<<1<<endl;
    else cout<<2<<endl;
    

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

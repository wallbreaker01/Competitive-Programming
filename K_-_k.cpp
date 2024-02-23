#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n;
    cin >> n;
    ll s[n];
    ll sum=0;
    //ll c=0;
    for (ll i = 0 ; i < n ; i++) cin>>s[i];
    for (ll i = 0 ; i < n ; i++) 
    {
        ll c=0;
        for (ll j = 0 ; j < i ; j++)
        {
            if(s[i]>=s[j]) c++;
        }
        sum=sum+c;
    }
    cout<<sum<<endl;

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
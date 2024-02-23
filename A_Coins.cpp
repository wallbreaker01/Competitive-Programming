
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n, k;
    cin >> n >> k ;
    // ll x=n/k;
    // ll y=n%k;
    if(k%2==0 and n%2!=0) no;
    else yes;


}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

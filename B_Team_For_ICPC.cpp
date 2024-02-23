#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define babusuna main
#define to_sowmik_roy 0;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n;
    cin >> n;
    if(n%3==0)
    {
        ll x=n/3;
        // ll y=x;
        // ll z=n-(x+y);
        cout<<x<<" "<<x<<" "<<x<<endl;
    }
    else if(n%3==1)
    {
        ll x=n/3;
        cout<<x<<" "<<x<<" "<<x+1<<endl;
    }
    else if(n%3==2)
    {
        ll x=n/3;
        cout<<x<<" "<<x+1<<" "<<x+1<<endl;
    }

}

int babusuna()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return to_sowmik_roy;
}

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
    if(n%2) cout<<-1<<endl;
    else
    {
        for (ll i = 0 ; i < n ; i+=2) 
        {
            cout<<i+2<<" "<<i+1<<" ";
        }
        cout<<endl;
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

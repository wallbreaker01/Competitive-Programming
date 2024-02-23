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
    ll h,x,y;
    cin>>h>>x>>y;
    if(x>y) cout<<ceil(h/(x*1.0))<<endl;
    else
    {
        h=h-y;
        cout<<ceil(h/(x*1.0))+1<<endl;
        
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

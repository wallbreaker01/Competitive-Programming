
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll x, y;
    cin >> x >> y ;
    ll i=1,c=0;
    while(y<x)
    {
        y=y+i;
        i++;
        c++;
    }
    cout<<c<<endl;
    


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


#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll c1,c2,c3,a1,a2,a3,a4,a5;
    cin>>c1>>c2>>c3>>a1>>a2>>a3>>a4>>a5;
    c1=c1-a1;
    c2=c2-a2;
    c3=c3-a3;
    if(c1>=0 and c2>=0 and c3>=0 and (c1+c3)>=a4 and (c2+c3)>=a5 and (c1+c2+c3)>=a4+a5) yes;
    else no;


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

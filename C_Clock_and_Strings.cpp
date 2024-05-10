#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
 

void solve()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll c1=0,c2=0;
    ll s=max(a,b);
    a=min(a,b);
    b=s;
    for(ll i = a; i <= b; i++)
    {
        if(c==i) c1=1;
        if(d==i) c2=1;
    }
    if((c1 and c2) or (!c1 and !c2)) no;
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
}

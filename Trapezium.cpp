#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
ll i=1;
/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    double x=(b*b-d*d+(a-c)*(a-c))/(2*(a-c));
    double y=0.5*(a+c)*sqrt(b*b-x*x);
    cout<<"Case "<<i<<": "<<fixed<<setprecision(7)<<y<<endl;
    i++;


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

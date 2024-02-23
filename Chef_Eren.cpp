#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n,a,b,x=0,y=0;
    cin >> n >> a >> b;
    for (ll i = 1 ; i <= n ; i++) 
    {
        if(i%2==0) x++;
        else y++;
    }
    ll sum=x*a+y*b;
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

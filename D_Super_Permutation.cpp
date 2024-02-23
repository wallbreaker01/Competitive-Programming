
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n;
    cin >> n;
    if(n%2!=0 and n!=1)
    {
        cout<<-1<<endl;
        return;
    }
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    cout<<n<<" ";
    ll x=n-1,y=2;
    for (ll i = 0 ; i < n-1 ; i++) 
    {
        if(i%2==0)
        {
            cout<<x<<" ";
            x-=2;
        }
        else
        {
            cout<<y<<" ";
            y+=2;
        }
    }
    cout<<endl;


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

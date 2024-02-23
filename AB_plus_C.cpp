#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fastio                        \
{                                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
}
ll N=1000000;
 

void solve()
{
    ll x;
    cin >> x;
    // ll y=x-1;
    if(x==1)
    {
        cout<<-1<<endl;
        return;
    }
    if(x<=N) cout<<1<<" "<<1<<" "<<x-1<<endl;
    else if(x%N==0) cout<<(x/N)-1<<" "<<N<<" "<<N<<endl;
    else cout<<x/N<<" "<<N<<" "<<x%N<<endl;
    // ll a=sqrt(x);
    // ll b=x-a*a;
    // if(x!=a*a) cout<<a<<" "<<a<<" "<<b<<endl;
    // else
    // {
    //     ll a=sqrt(x-1);
    //     ll b=x-a*a;
    //     cout<<a<<" "<<a<<" "<<b<<endl;
    // }

}

int main()
{
    fastio
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}

#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
 

int get(ll n)
{
    ll a=0;
    while(n)
    {
        a+=n%10;
        n/=10;
    }
    return a;
}

void solve()
{
    ll x, k, c=0;
    cin >> x >> k ;
    while (get(x) % k) 
    {
      x++;
    }
    cout<<x<<endl;
    


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

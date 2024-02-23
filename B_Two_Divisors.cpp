#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
vector<ll>v;




void solve()
{
    ll a,b;
    cin >> a >> b;
    if(b%a==0) cout<<b*b/a<<endl;
    else cout<<a*b/gcd(a,b)<<endl;



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

#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
 

void solve()
{
    ll a,b,c;
    cin>>a>>b>>c;
    if(a==b and a!=c) cout<<c<<endl;
    else if(a==c and a!=b) cout<<b<<endl;
    else cout<<a<<endl;


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

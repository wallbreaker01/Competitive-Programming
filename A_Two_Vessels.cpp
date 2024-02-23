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
    cout<<ceil(abs(a-b)*1.0/(2*c))<<endl;


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

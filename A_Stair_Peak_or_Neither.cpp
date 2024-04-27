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
    if(a<b and b<c) cout<<"STAIR"<<endl;
    else if(a<b and b>c) cout<<"PEAK"<<endl;
    else cout<<"NONE"<<endl;


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

#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back

void solve()
{
    ll n,x,y; 
    cin>>n;
    bool one1 = false;
    bool one2 = false;
    bool two1 = false;
    bool two2 = false;
    while(n--)
    {
        cin>>x>>y;
        if(x > 0) one1 = true;
        if(x < 0) one2 = true;
        if(y > 0) two1 = true;
        if(y < 0) two2 = true;
    }
    if(one1 == true && one2 == true && two1 == true && two2 == true) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
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

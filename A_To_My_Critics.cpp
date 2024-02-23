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
    if(a+b>=10) yes;
    else if(a+c>=10) yes;
    else if(b+c>=10) yes;
    else no;


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

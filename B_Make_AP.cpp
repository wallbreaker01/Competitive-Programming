#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

void solve()
{
    ll a,b,c;
    cin>>a>>b>>c;
    if( (a+c)%(2*b)==0 || ((2*b-c)%a==0 && (2*b-c)>0) || ((2*b-a)%c==0 && (2*b-a)>0) )
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    


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

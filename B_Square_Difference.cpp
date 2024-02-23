#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

void solve()
{
    ll a,b;
    cin >> a >> b ;
    ll c=a+b;
    ll count=0;
    for(ll i=2;i<=sqrt(c);i++)
    {
        if(c%i==0)
        {
            count=1;
            break;
        }
    }
    if(count==0 && a-b==1)cout<<"YES"<<endl;
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

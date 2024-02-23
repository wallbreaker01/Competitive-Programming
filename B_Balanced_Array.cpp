#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll sum=0,sum2=0;
    if((n/2)%2!=0) cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        for(ll i = 2;i <= n; i=i+2)
        {
            cout<<i<<" ";
            sum=sum+i;
        }
        for(ll j = 1;j <= n-2; j=j+2)
        {
            cout<<j<<" ";
            sum2=sum2+j;
        }
        cout<<sum-sum2<<endl;
    }


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

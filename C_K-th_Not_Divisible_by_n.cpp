#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

void solve()
{
    ll n,k;
    cin >> n >> k;
    ll a=k,count=0;
    while(a>=n)
    {
        count=count + a/n;
        a=a/n + a%n;
    }
    cout<<count+k<<endl;
    


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

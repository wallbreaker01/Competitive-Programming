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
    ll ans=1,i=1;
    while(1!=0)
    {
        ans=ans+pow(2,i);
        i++;
        if(n%ans==0) break;
    }
    cout<<n/ans<<endl;

}
int n;
cin >> n;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}

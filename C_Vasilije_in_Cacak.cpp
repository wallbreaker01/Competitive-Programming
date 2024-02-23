#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
 

void solve()
{
    ll n,k,x;
    cin>>n>>k>>x;
    ll sum=(n*(n+1))/2-(n-k)*(n-k+1)/2;
    ll s=k*(k+1)/2;
    if(sum>=x && x>=s) yes;
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

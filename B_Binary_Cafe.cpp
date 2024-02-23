#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
 

void solve()
{
    ll n, k;
    cin >> n >> k ;
    ll x=log2(n), y=ceil(pow(2,k));
    if(x<k) cout<<n+1<<endl;
    else cout<<y<<endl;
    


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

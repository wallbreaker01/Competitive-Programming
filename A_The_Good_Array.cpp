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
    if(n%k != 1 and k>1) cout<<(n+k-1)/k + 1<<endl;
    else cout<<(n+k-1)/k<<endl;
    
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

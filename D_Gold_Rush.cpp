#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fastio                        \
{                                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
}

ll m,ans;

void sol(ll n)
{
    if(n==m) ans=m;
    else if(n%3==0) 
    {
        sol(n/3);
        sol((2*n)/3);
    }
}


void solve()
{
    ll n;
    cin >> n >> m ;
    ans=-1;
    sol(n);
    if(ans==m) yes;
    else no;
    
    


}

int main()
{
    fastio
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}

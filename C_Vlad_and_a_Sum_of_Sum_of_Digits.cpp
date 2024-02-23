#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define pb push_back
const ll mxn = 200010;
int dp[mxn];


int sum(int n)
{
    int ans=0;
    while(n>0)
    {
        int r=n%10;
        n=n/10;
        ans+=r;
    }
    return ans;
}

void solve() 
{
    ll n;
    cin>>n;
    cout<<dp[n]<<endl;
}

int main() 
{
    ll t;
    cin >> t;
    ll c=0;
    for(ll i = 1 ; i <= mxn ; i++)
    {
        c+=sum(i);
        dp[i]=c;
    }
    while (t--) 
    {
        solve();
    }
}

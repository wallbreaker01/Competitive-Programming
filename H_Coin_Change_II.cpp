#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back


int coin(vector<ll>&v,ll n,ll k)
{
    vector<ll>dp(k+1,0);
    dp[0]=1;
    for (ll i = 0 ; i < n ; i++) 
    {
        for (ll j = v[i] ; j <= k ; j++)
        {
            dp[j] = (dp[j]+dp[j-v[i]])%100000007;
        }
    }
    return dp[k];
}



int main()
{
    ll t;
    cin >> t;
    for (ll i = 1 ; i <= t ; i++) 
    {
        ll n, k;
        cin >> n >> k ;
        vector<ll>v(n);
        for (ll j = 0 ; j < n ; j++) 
        {
            cin>>v[j];
        }
        cout<<"Case "<<i<<": "<<coin(v,n,k)<<endl;
    }
    

}
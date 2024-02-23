#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
 

void solve()
{
    ll n, k, sum = 0;
    cin >> n >> k ;
    ll s[n],v[n];
    for (ll i = 0 ; i < n ; i++) 
    {
        cin>>s[i];
        sum+=s[i];
    }
    if(sum<n) no;
    else
    {
        sum%=n;
        if(k==0 and sum!=0) no;
        else yes;
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

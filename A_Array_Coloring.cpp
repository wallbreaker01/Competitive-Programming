#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
 

void solve()
{
    ll n;
    cin >> n;
    ll s[n];
    for (ll i = 0 ; i < n ; i++) cin>>s[i];
    ll sum1=0,sum2=0;
    for (ll i = 0 ; i < n ; i++) 
    {
        if(s[i]%2==0) sum1+=s[i];
        else sum2+=s[i];
    }
    if(sum1%2==0 and sum2%2==0) yes;
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

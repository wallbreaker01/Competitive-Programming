#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
 

void solve()
{
    ll n,c=0;
    cin >> n;
    ll s[n];
    for (ll i = 0 ; i < n ; i++) cin>>s[i];
    sort(s,s+n);
    if(n==1)
    {
        cout<<0<<endl;
        return;
    }
    for (ll i = 0 ; i < n/2 ; i++) 
    {
        c+=abs(s[i]-s[n-1-i]);
    }
    cout<<c<<endl;
    
    


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

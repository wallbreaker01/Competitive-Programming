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
    s[0]=10,s[1]=11;
    for (ll i = 2 ; i < n ; i++) 
    {
        s[i]=s[i-1]+1;
        while(3*s[i]%(s[i-1]+s[i-2])==0) s[i]++;
    }
    for (ll i = 0 ; i < n ; i++) 
    {
        cout<<s[i]<<" ";
    }
    cout<<endl;


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

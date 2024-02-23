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
    ll c=1;
    for (ll i = 0 ; i < n ; i++) 
    {
        cin>>s[i];
    }
    for (ll i = 0 ; i < n ; i++) 
    {
        if(s[i]==c) c++;
        c++;
    }
    cout<<c-1<<endl;
    
    


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

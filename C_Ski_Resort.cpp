#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
 

void solve()
{
    ll n, k, q, x;
    cin >> n >> k >> q;
    ll c=0,sum=0;
    for (ll i = 0 ; i < n ; i++) 
    {
        cin>>x;
        if(x<=q) c++;
        else c=0;
        if(c>=k) sum+=c-k+1;
    }
    cout<<sum<<endl;
    


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

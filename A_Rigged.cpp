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
    ll s[n],v[n];
    for (ll i = 0 ; i < n ; i++) 
    {
        cin>>s[i]>>v[i];
    }
    ll a=s[0],b=v[0];
    ll c=0;
    for (ll i = 1 ; i < n ; i++) 
    {
        if(s[i]>=a)
        {
            if(v[i]<b) continue;
            else
            {
                c=1;
                break;
            }
        }
    }
    if(c==0) cout<<a<<endl;
    else cout<<-1<<endl;
    


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

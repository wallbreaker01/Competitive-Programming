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
 

void solve()
{
    ll n;
    cin >> n;
    ll s[n],c=0;
    for (ll i = 0 ; i < n ; i++)
    {
        cin>>s[i];
        c+=s[i];
    }
    sort(s,s+n);
    if(s[0]==s[n-1] and s[0]%2==1) cout<<"CHEF"<<endl;
    else if(s[0]==s[n-1] and s[0]%2==0) cout<<"CHEFINA"<<endl;
    else
    {
        ll a=s[0];
        ll b=c-a*n;
        if(b%2==1) cout<<"CHEFINA"<<endl;
        else cout<<"CHEF"<<endl;
    }
    


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

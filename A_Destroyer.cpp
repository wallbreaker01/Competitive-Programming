#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
 

void solve()
{
    ll n,mx=0,c=0;
    cin >> n;
    vector<ll>v(n),s(1000);
    for (ll i = 0 ; i < n ; i++) cin>>v[i];
    sort(v.begin(),v.end());
    for(auto x : v) 
    {
        if(x==0) s[0]++;
        else
        {
            if(s[x-1])
            {
                s[x-1]--;
                s[x]++;
            }
            else
            {
                c=1;
                break;
            }
        }
    }
    if(c) no;
    else yes;

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

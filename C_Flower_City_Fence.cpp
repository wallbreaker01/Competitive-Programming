#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
 

void solve()
{
    ll n, sum = 0, c = 0;
    cin >> n;
    vector<ll>v(n);
    for (ll i = 0 ; i < n ; i++) cin>>v[i];

    if (*max_element(v.begin(),v.end())>n) 
    {
        no;
        return;
    }
    vector<ll>s(n+1),x(n+1);
    for (ll i = 0 ; i < n ; i++) 
    {
        s[0]++;
        s[v[i]]--;
    }
    for (ll i = 0 ; i < n ; i++) 
    {
        sum+=s[i];
        x[i]=sum;
    }
    for (ll i = 0 ; i < n ; i++) 
    {
        if(x[i]!=v[i])
        {
            c=1;
            break;
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

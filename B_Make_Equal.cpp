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
    vector<ll> s(n); 
    ll sum = 0; 
    for(ll i = 0; i < n; i++) 
    { 
        cin >> s[i]; 
        sum += s[i]; 
    } 
    ll k = sum / n; 
    ll x = 0; 
    bool temp = true; 
    for(ll i = 0; i < n; i++) 
    { 
        if(s[i] > k) x += s[i] - k; 
        else if(s[i] < k) 
        { 
            if(x >= k - s[i]) x -= (k - s[i]); 
            else 
            { 
                temp = false; 
                 break; 
            } 
        } 
    } 
    if(temp) yes;
    else no;

}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}

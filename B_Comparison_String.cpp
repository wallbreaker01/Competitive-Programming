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
    string s;
    cin >> s;
    ll c=1,mx=1;
    for (ll i = 0 ; i < n-1 ; i++) 
    {
        if(s[i]==s[i+1]) c++;
        else
        {
            mx=max(mx,c);
            c=1;
        }
    }
    mx=max(mx,c);
    cout<<mx+1<<endl;
    


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

#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
 

void solve()
{
    string s;
    cin >> s;
    ll a=1,b=1,mx=-1e9;
    for (ll i = 1 ; i < s.length() ; i++) 
    {
        if(s[i]==s[i-1])
        {
            a+=1;
            b*=a;
        }
        else
        {
            mx=max(a,mx);
            a=1;
        }
    }
    mx=max(a,mx);
    cout<<mx-1<<" "<<b%998244353<<endl;
    


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

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
    ll c=0,v=0;
    for (ll i = 0 ; i < 5 ; i++) 
    {
        if(s[i]=='A') c++;
        else v++;
    }
    if(c>v) cout<<"A"<<endl;
    else cout<<"B"<<endl;
    
    


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

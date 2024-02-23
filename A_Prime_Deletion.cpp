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
    ll x,y;
    for (ll i = 0 ; i < 9 ; i++) 
    {
        if(s[i]=='9') x=i;
        if(s[i]=='7') y=i;
    }
    if(x>y) cout<<79<<endl;
    else cout<<97<<endl;
    
    


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

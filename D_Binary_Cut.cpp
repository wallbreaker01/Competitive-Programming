#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
 

void solve()
{
    string s;
    cin>>s;
    ll c=0;
    for (ll i = 0 ; i < s.size()-1 ; i++) 
    {
        if(s[i]=='0' and s[i+1]=='1') c=-1;
    }
    for (ll i = 1 ; i < s.size() ; i++)
    {
        if(s[i]!=s[i-1]) c++;
    }
    cout<<c+1<<endl;

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

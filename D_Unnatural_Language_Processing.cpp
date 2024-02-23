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
    string ans="";
    bool c=false;
    for(ll i = 0 ; i < n ; i++) 
    {
        if(s[i]=='a' or s[i]=='e') 
        {
            ans+=s[i];
            c=true;
            if((s[i+2] == 'a' or s[i+2] == 'e') and i + 2 < n) 
            {
                ans+='.'; 
                c=false;;
            }
        }
        else 
        {
            ans+=s[i];
            if(c) 
            {
                ans+='.';
                c=false;
            }
        }
    }

    if(ans.back()=='.') ans.pop_back();
    cout<<ans<<endl;
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

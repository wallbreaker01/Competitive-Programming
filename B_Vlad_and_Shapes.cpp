#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back



void solve()
{  
    ll n;
    cin>>n;
    vector<string>v;
    ll c=0;
    string s;
    for(ll i=0;i<n;i++)
    {
        cin>>s;
        v.push_back(s);
    }
    for(ll i=0;i<n;i++)
    {
        ll x=0;
        for(ll j=0;j<n;j++)
        {
            if(v[i][j]=='1')
            {
                x++;
            }
        }
        if(c==0)
        {
            c=x;
        }
        else if(x==c)
        {
            cout<<"SQUARE"<<endl;
            return;
        }
        else
        {
            cout<<"TRIANGLE"<<endl;
            return;
        }
    }


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

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
    vector<ll>v(n);
    ll x,y=0,first=0,c=1;
    string s;
    for (ll i = 0 ; i < n ; i++) 
    {
        cin>>x;
        if(i>0)
        {
            if(c)
            {
                if(x >= y)
                {
                    s.pb('1');
                    y=x;
                } 
                else if(x <= first)
                {
                    c = 0;
                    s.pb('1');
                    y=x;
                }
                else s.pb('0');
            }
            else
            {
                if(x >= y and x <=first)
                {
                    s.pb('1');
                    y=x;
                }
                else s.pb('0');
            }
        }
        else
        {
            first = x;
            s.pb('1');
            y=x;
        }
    }
    cout<<s<<endl;
    
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
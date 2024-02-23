#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

void solve()
{
    string s[100];
    for (ll i = 0 ; i < 8 ; i++) cin>>s[i];
    ll flag=0,b=0,c=0;
    for (ll i = 0 ; i < 8 ; i++) 
    {
        c=0;
        for (ll j = 0 ; j < 8 ; j++)
        {
            if(s[i][j]=='R') c++;
        }
        if(c==8)
        {
            cout<<"R"<<endl;
            flag=1;
            break;
        }
    }
    if(flag!=1) cout<<"B"<<endl;


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

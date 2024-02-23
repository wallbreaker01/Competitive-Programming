#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
 

void solve()
{
    string s1, s2;
    cin >> s1 >> s2 ;
    ll c=0;
    for (ll i = 0 ; i < s1.size()-1 ; i++) 
    {
        if(s1[i]==s2[i] and s1[i+1]==s2[i+1] and s1[i]=='0' and s1[i+1]=='1')
        
        {
            c=1;
            break;
        }
    }
    if(c) yes;
    else no;


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

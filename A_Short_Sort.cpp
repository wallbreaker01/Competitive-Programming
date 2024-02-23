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
    if(s[0]=='a' and s[1]=='b' and s[2]=='c') yes;
    else if(s[0]=='a' and s[1]=='c' and s[2]=='b') yes;
    else if(s[0]=='b' and s[1]=='a' and s[2]=='c') yes;
    else if(s[0]=='c' and s[1]=='b' and s[2]=='a') yes;
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

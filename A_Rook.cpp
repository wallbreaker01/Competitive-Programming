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
    for(int i=1; i<=8; i++)
    {
        if(i!=s[1]-'0')
        cout<<s[0]<<i<<"\n";
    }
    for(int i=0; i<8; i++)  
    {
        if(i!= s[0]-'a')
        cout<<char('a'+i)<<s[1]<<"\n";
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}

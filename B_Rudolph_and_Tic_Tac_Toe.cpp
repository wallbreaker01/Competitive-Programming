#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
 

void solve()
{
    string a,b,c;
    cin>>a>>b>>c;
        if(a[0]!='.' and a[0]==b[0] and b[0]==c[0])cout<<a[0]<<endl;
        else if(a[1]!='.' and a[1]==b[1] and b[1]==c[1])cout<<a[1]<<endl;
        else if(a[2]!='.' and a[2]==b[2] and b[2]==c[2])cout<<a[2]<<endl;
        else if(a[0]!='.' and a[0]==a[1] and a[1]==a[2])cout<<a[0]<<endl;
        else if(b[0]!='.' and b[0]==b[1] and b[1]==b[2])cout<<b[0]<<endl;
        else if(c[0]!='.' and c[0]==c[1] and c[1]==c[2])cout<<c[0]<<endl;
        else if(a[0]!='.' and a[0]==b[1] and b[1]==c[2])cout<<a[0]<<endl;
        else if(a[2]!='.' and a[2]==b[1]and b[1]==c[0])cout<<c[0]<<endl;
        else cout<<"DRAW"<<endl;


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

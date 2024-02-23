#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
 

void solve()
{
    ll n, k;
    cin >> n >> k ;
    string s;
    cin >> s;
    ll c=0,x=0;
    for (int i = 0; i < n; i++) 
    {
        if(s[i]=='B')
        {
            c++;
            i+=k-1;
        }
    }
    cout<<c<<endl;
        

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

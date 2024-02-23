
#include<bits/stdc++.h>
#include<string.h>
typedef long long int ll;
using namespace std;

void solve()
{
    int n;
    cin >> n;
    ll s[n];
    int count=0;
    for (int i = 1 ; i <= n ; i++) cin>>s[i];
    for (int i = 1 ; i <= n-1 ; i++) 
    {
        if(s[i]<=s[i+1]) count=1;
    }
    if(count==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;




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

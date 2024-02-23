#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll s[4],count=0;
    for (int i = 0 ; i < 3 ; i++) cin>>s[i];
    
    for (int i = 0 ; i < 2 ; i++) 
    {
        if(s[n-1]==0 || s[n-1]==n)
        {
            count=1;
            break;
        }
        else
        {
            n=s[n-1];
        }
    }
    if(count==0) cout<<"YES"<<endl;
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

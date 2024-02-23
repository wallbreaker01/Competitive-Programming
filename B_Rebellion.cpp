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
    ll s[n];
    ll c=0;
    for (ll i = 0 ; i < n ; i++) cin>>s[i];
    ll i=0,j=n-1;
    while(i<j)
    {
        if(s[i]==1 && s[j]==0)
        {
            c++;
            i++;
            j--;
        }
        else if(s[i]==0 && s[j]==1) i++,j--;
        else if(s[i]==1) j--;
        else i++;

        
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

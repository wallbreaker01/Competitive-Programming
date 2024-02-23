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
    ll even=0,odd=0,even2=0,odd2=0;
    for (int i = 0 ; i < n ; i++) 
    {
        cin>>s[i];
        if(i%2==0)
        {
            if(s[i]%2==0) even=1;
            else odd=1;
        }
        else
        {
            if(s[i]%2==0) even2=1;
            else odd2=1;
        }
    }
    if(even==1 && odd==1)cout<<"NO"<<endl;
    else if(even2==1 && odd2==1)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;


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

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
    cout<<"2"<<endl;
    for (int i = 1 ; i <= n ; i=i+2) 
    {
        for (int j = i ; j <= n ; j=j*2)
        {
            cout<<j<<" ";
        }
        
    }
    cout<<endl;


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

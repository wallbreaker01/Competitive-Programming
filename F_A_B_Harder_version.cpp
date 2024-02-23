#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

void solve()
{
    int count=0;
    for (int i = 0 ; i < 7 ; i++) 
    {
        int x;
        cin>>x;
        count=count+x;
    }
    cout<<count<<endl;


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

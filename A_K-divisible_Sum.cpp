#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

void solve()
{
    ll n,k;
    cin >> n>>k;
    if(k>=n)
    {
        if(k%n==0) cout<<k/n<<endl;
        else cout<<(k/n)+1<<endl;
    }
    else
    {
        if(n%k==0) cout<<"1"<<endl;
        else cout<<"2"<<endl;
        
    }
    


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

#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
 

void solve()
{
    ll n;
    cin >> n;
    if(n==1)
    {
        cout<<2<<endl;
        return;
    }
    if(n%3==0 and n%2==0)
    {
        cout<<n/3<<endl;
        return;
    }
    else if(n%3==0)
    {
        cout<<n/3<<endl;
        return;
    }
    else if(n%3!=0)
    {
        cout<<n/3+1<<endl;
        return;
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

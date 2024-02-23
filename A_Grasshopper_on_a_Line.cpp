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
    if(n%k)
    {
        cout<<1<<endl;
        cout<<n<<endl;
    }
    else
    {
        cout<<2<<endl;
        cout<<1<<" "<<n-1<<endl;
        
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

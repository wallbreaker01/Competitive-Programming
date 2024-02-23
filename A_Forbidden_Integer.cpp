#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back

void solve()
    {
        ll n,k,x;
        cin>>n>>k>>x;
        if(k==1 and x==1) no;
        else if(k==2 and x==1 and n%2!=0) no;
        else
        {
            if(x==1 and k==2)
            {
                yes;
                cout<<n/2<<endl;
                for(ll i=0; i<n/2; i++) cout<<2<<" ";
                cout<<endl;
            }
            else if(x==1&&k>2)
            {
                if(n%2==0)
                {
                    yes;
                    cout<<n/2<<endl;
                    for(ll i=0; i<n/2; i++) cout<<2<<" ";
                    cout<<endl;
                }
                if(n%2!=0)
                {
                    yes;
                    cout<<1+(n-3)/2<<endl;
                    cout<<3<<" ";
                    for(ll i=0; i<(n-3)/2; i++) cout<<2<<" ";
                    cout<<endl;
                }
            }
            else
            {
                yes;
                cout<<n<<endl;
                for(ll i=0;i<n;i++) cout<<1<<" ";
                cout<<endl;
            }
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

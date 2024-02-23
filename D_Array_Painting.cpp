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
    ll s[n];
    for (ll i = 0 ; i < n ; i++) cin>>s[i];
    ll c=0;
    for (ll i = 0 ; i < n ; i++) 
    {
        if(s[i]==1)
        {
            if(i>0 and s[i-1]==0)
            {
                s[i]=0;
                c++;
            }
            else if( s[i]==2)
            {
                if(i>0 and (s[i-1]==0 or s[i-1]==1))
                {
                    s[i]=1;
                    c++;
                }
                else if(i<n and (s[i+1]==0 and s[i+1]==1))
                {
                    s[i]=1;
                    c++;
                }
            }
        }   
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

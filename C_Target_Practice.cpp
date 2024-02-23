#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
 

void solve()
{
    char s[11][11];
    for (ll i = 1 ; i <= 10 ; i++) 
    {
        for (ll j = 1 ; j <= 10 ; j++)
        {
            cin>>s[i][j];
            //if(s[i][j]='X') sum=
        }
    }
    ll c=0;
    for (ll i = 1 ; i <= 10 ; i++) 
    {
        for (ll j = 1 ; j <= 10 ; j++)
        {
            if(s[i][j]=='X')
            {
                if(i<=5)
                {
                    if(j<=5) c+=min(i,j);
                    else c+=min(i,11-j);
                }
                else
                {
                    if(j<=5) c+=min(11-i,j);
                    else c+=min(11-i,11-j);
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

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
    string s;
    cin >> s;
    for (ll i = 0 ; i < n ; i++) 
    {
        cout<<s[i];
        for (ll j = i+1 ; j < n ; j++)
        {
            if(s[i]==s[j])
            {
                i=j;
                break;
            }
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

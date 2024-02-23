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
    ll sum=0,odd=0,even=0;
    for (ll i = 0 ; i < n ; i++) 
    {
        cin>>s[i];
        sum+=s[i];
        if(s[i]%2) odd++;
        else even++;
        ll masha=odd/3;
        if(even==0 and odd==1) masha=0;
        else if(odd%3==1) masha=(odd+2)/3;
        cout<<sum-masha<<" "; 
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

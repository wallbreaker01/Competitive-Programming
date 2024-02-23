#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
 

void solve()
{
    ll d, k, c = 0;
    cin >> d >> k ;
    ll s[d];
    for (ll i = 0 ; i < d ; i++)
    {
        cin>>s[i];
        if(s[i]>=k) c+=s[i]-k;
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

#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define babusuna main
#define to_sowmik_roy 0;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

/* Vogoban please code ta accept korai dew >.< */

int main()
{
    ll n, k;
    cin >> n >> k ;
    ll s[n];
    vector<ll>v;
    for (ll i = 0 ; i < n ; i++)
    {
        cin>>s[i];
        v.push_back(s[i]);
    }
    sort(s,s+n);
    ll mn=s[0],mx=s[n-1];
    if(k==1) cout<<mn<<endl;
    else if(k==2) cout<<max(v[0],v[v.size()-1]<<endl;
    else cout<<mx<<endl;

}
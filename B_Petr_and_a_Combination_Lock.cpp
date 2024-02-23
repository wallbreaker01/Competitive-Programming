#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fastio                        \
{                                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
}

int main()
{
    fastio
    ll n,c=0;
    cin >> n;
    ll s[n];
    for (ll i = 0 ; i < n ; i++) cin>>s[i];
    for (ll i = 0 ; i < (1<<n) ; i++) 
    {
        ll sum=0;
        for (ll j = 0 ; j < n ; j++)
        {
            if(i>>j&1) sum+=s[j];
            else sum-=s[j];
        }
        if(sum%360==0) c=1;
    }
    if(c) yes;
    else no;
    

}
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back


int main()
{
    ll t; 
    cin >> t;
    while(t--)
    {
        ll n; 
        cin >> n;
        ll s[n], cnt = 1, cnt1 = 1;
        for(auto &i: s) cin >> i;
        if(n == 1)
        {
            cout <<0<<endl;
            continue;
        }
        for (int i = 1; i < n; i++)
        {
            if(s[0] == s[i]) cnt++;
            else break;
        }
        for (int i = n-2; i >= 0; i--)
        {
            if(s[n -1] == s[i]) cnt1++;
            else break;
        }
        if(s[0] == s[n-1]) cout<<max(ll(0),n-cnt-cnt1)<<endl;
        else cout<<n-max(cnt,cnt1)<<endl;
    }

}
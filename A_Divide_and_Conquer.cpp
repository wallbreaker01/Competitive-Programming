#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n,sum=0,mn=INT_MAX;
    cin >> n;
    ll s[n];
    for (ll i = 0 ; i < n ; i++)
    {
        cin>>s[i];
        sum=sum+s[i];
    }
    if(sum%2==0) cout<<0<<endl;
    else
    {      
        for (ll i = 0 ; i < n; i++)
        {
            ll c=0;

            if (s[i]%2)
            {
                while(s[i]%2)
                {
                    s[i]=s[i]/2;
                    c++;
                }
            }

            else if(s[i]%2==0)
            {
                while(s[i]%2==0)
                {
                    s[i]=s[i]/2;
                    c++;
                }
            }

            mn = min(mn,c);    
        }

        cout << mn << endl;    
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

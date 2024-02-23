#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

void solve()
{
    ll q,d;
    cin >> q >> d ;
    while(q--)
    {
        ll n, c=0;
        cin >> n;
        if(n>=10*d) cout<<"YES"<<endl;
        else
        {
            while(n>0)
            {
                if(n%10==d)
                {
                    c=1;
                    break;
                }
                n=n-d;
            }
            if(c==1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
            
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

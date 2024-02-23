#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll mx = INT_MAX;
const ll mn = INT_MIN;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll k;
    cin >> k;
    ll val[k];
    char ch[k];
    for (ll i = 0 ; i < k ; i++) cin>>ch[i]>>val[i];
    ll m;
    cin >> m;
    ll sum=0;
    getchar();
    while(m--) 
    {
        string s;
        getline(cin,s);
        for (ll i = 0 ; i < s.size() ; i++) 
        {
            for (ll j = 0 ; j < k ; j++)
            {
                if(s[i]==ch[j]) sum=sum+val[j];
            }
        }
    }
    //cout<<sum/100<<endl;
    printf("%.2lf$\n",(double)sum/100);

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        //getchar();
        solve();
    }
}

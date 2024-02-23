#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define babusuna main
#define to_sowmik_roy 0;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll k;
    cin >> k;
    ll v[k];
    char c[k];
    for (ll i = 0 ; i < k ; i++) cin>>c[i]>>v[i];
    double sum=0,m;
    cin >> m;
    string s;
    getchar();
    while(m--) 
    {
        // cin>>s;
        getline(cin,s);
        for (ll i = 0 ; i < s.size() ; i++) 
        {
            for (ll j = 0 ; j < k ; j++)
            {
                if(s[i]==c[j]) sum+=v[j];
            }
            //sum+=c;
        }
    }
    printf("%.2lf$\n",sum/100);


}

int babusuna()
{
    int t;
    cin>>t;
    // getchar();
    while(t--)
    {
        solve();
    }
    return to_sowmik_roy;
}



//printf("%.2lf$\n",sum/100);
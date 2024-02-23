#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define babusuna main
#define to_sowmik_roy 0;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

/* Vogoban please code ta accept korai dew >.< */

int babusuna()
{
    ll t;
    cin >> t;
    for (ll i = 1 ; i <= t ; i++) 
    {
        ll p, l;
        cin >> p >> l ;
        ll khaisi=p-l;
        if(l*2>=p)
        {
            printf("Case %d: impossible\n",i);
            continue;
        }
        printf("Case %lld: ",i);
        vector<ll>v;
        for (ll i = 1 ; i*i <= khaisi ; i++) 
        {
            if(khaisi%i==0)
            {
                v.push_back(i);
                if(p/i!=i) v.push_back(khaisi/i);
            }
        }
        sort(v.begin(),v.end());
        for (ll i = 0 ; i < v.size() ; i++) 
        {
            if(v[i]>l) cout<<v[i]<<" ";
        }
        cout<<endl;

        
    }
    

    return to_sowmik_roy;
}
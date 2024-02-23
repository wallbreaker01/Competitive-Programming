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
    ll n, q;
    cin >> n >> q ;
    ll s[1000]={0},crd,plyr;
    for (ll i = 0 ; i < q ; i++) 
    {
        cin>>crd>>plyr;
        if(crd==1) s[plyr]+=1;
        else if(crd==2) s[plyr]+=2;
        else if(crd==3)
        {
            if(s[plyr]>=2) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
    

    return to_sowmik_roy;
}
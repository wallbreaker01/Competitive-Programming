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
    for (ll p = 1 ; p <= t ; p++) 
    {
        string a,b;
        cin >> a >> b ;
        ll intb=abs(stoi(b));
        ll i=0,c=0;
        if(a[0]=='-') i=1;
        //else i=0;
        while(i<a.size()) 
        {
            c=c*10+a[i]-'0';
            c=c%intb;
            i++;
        }
        if(c==0) printf("Case %lld: divisible\n",p);
        else printf("Case %lld: not divisible\n",p);
    }

    return to_sowmik_roy;
}
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll mx = INT_MAX;
const ll mn = INT_MIN;

/* Vogoban please code ta accept korai dew >.< */

int main()
{
    int t;
    cin>>t;
    for (ll i = 1 ; i <= t ; i++)
    {
        double a,b,c,d,e,f;
        cin>>a>>b>>c>>d>>e>>f;
        double oa=sqrt(pow(c-a,2)+pow(d-b,2));
        double ob=sqrt(pow(e-a,2)+pow(f-b,2));
        double ab=sqrt(pow(e-c,2)+pow(d-f,2));
        double th=acos((pow(oa,2)+pow(ob,2)-pow(ab,2))/(2*oa*ob));
        printf("Case %d: %.8lf\n",i,oa*th);

    }
}

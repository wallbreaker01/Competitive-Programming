#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll mx = INT_MAX;
const ll mn = INT_MIN;

/* Vogoban please code ta accept korai dew >.< */

int main()
{
    double n,c=0,sum=0;
    cin >> n;
    vector<double>v;
    for (ll i = 0 ; i < 5*n ; i++)
    {
        double x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    
    for (ll i = n ; i < 4*n ; i++) 
    {
        sum+=v[i];
        c++;
    }
    //double avg=sum/(3*n);
    printf("%.15lf\n",sum/c);
    

    
}
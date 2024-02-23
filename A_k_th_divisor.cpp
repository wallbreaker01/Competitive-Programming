
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

/* Vogoban please code ta accept korai dew >.< */

int main()
{
    ll n, k;
    cin >> n >> k ;
    vector<ll>v;
    for( ll i = 1 ; i*i <= n ; i++)
    {
        if(n%i==0)
        {
            if(n/i==i) v.push_back(n/i);
            else
            {
                v.push_back(i);
                v.push_back(n/i);
            }
        }
    }
    sort(v.begin(),v.end());
    if(k<=v.size()) cout<<v[k-1]<<endl;
    else cout<<-1<<endl;
    
    

}
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

/* Vogoban please code ta accept korai dew >.< */

int main()
{
    ll n, m;
    cin >> n >> m ;
    ll mn=min(n,m);
    cout<<min(mn,(n+m)/3)<<endl;
    

    return 0;
}
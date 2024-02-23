#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b and b>c) cout<<(a|b|c)<<endl;
    else if(a<b and b<c) cout<<0<<endl;
    else cout<<-1<<endl;
    


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

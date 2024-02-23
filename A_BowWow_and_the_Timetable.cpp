#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

/* Vogoban please code ta accept korai dew >.< */

int main()
{
    string s;
    cin >> s;
    ll x=s.size();
    ll c=0;
    if(x%2==0) cout<<x/2<<endl;
    else 
    {
        for (ll i = 1 ; i < x ; i++) 
        {
            if(s[i]=='1')
            {
                c=1;
                break;
            }
        }
        if(c) cout<<(x+1)/2<<endl;
        else cout<<x/2<<endl;
    }
     
    
    


}
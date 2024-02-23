
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

/* Vogoban please code ta accept korai dew >.< */
    ll c;
int main()
{
    string s,ans;
    cin >> s;

    if(s[0]=='h')
    {
        ans+="http://";
        c=4;
    }
    else
    {
        ans+="ftp://";
        c=3;
    }
    for( ll i = (int)s.size()-3 ; i >= c ; i--)
    {
        if(s[i]=='r' and s[i+1]=='u')
        {
            cout<<ans+s.substr(c,i-c)+".ru/"+s.substr(i+2)<<endl;
            return 0;
        }
    }
    cout<<ans+s.substr(c,(int)s.size()-2-c)+".ru"<<endl;
    
    

}
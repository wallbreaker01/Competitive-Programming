#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

/* Vogoban please code ta accept korai dew >.< */

int main()
{
    char s[1000000];
    cin >> s;
    ll l=strlen(s);
    ll c=0;
    for (ll i = 0 ; i < l ; ) 
    {
        if(s[i]=='1' && s[i+1]=='4' && s[i+2]=='4') i=i+3; //144 er jonno
        else if(s[i]=='1' && s[i+1]=='4') i=i+2; //14 er jonno
        else if(s[i]=='1') i++; // 1 er jonno;
        else
        {
            c=1;
            break;
        }
    }
    if(c==1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
   
}
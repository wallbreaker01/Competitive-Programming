#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

/* Vogoban please code ta accept korai dew >.< */

int main()
{
    ll n,m;
    cin >> n >> m ;
    string s1,s2,s3,s4,s5,s6;
    vector<string>v,v2;
    for (ll i = 0 ; i < n ; i++) 
    {
        cin>>s1>>s2;
        s3=s2+";";
        v.push_back(s3);
        s4=s2+";"+" "+"#"+s1;
        v2.push_back(s4);
    }
    while(m--)
    {
        cin>>s5>>s6;
        cout<<s5<<" ";
        for(ll i=0;i<v.size();i++)
        {
            if(v[i]==s6) cout<<v2[i]<<endl;
        }
    }
}
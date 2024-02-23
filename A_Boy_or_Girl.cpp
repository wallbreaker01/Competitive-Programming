#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

/* Vogoban please code ta accept korai dew >.< */

int main()
{
    string s;
    cin >> s;
    set<char>v;
    for (ll i = 0 ; i < s.size() ; i++) 
    {
        v.insert(s[i]);
    }
    if(v.size()%2==0) cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
    
}
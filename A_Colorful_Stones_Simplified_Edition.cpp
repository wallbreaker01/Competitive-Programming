#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;


int main()
{
    string s,t;
    cin >> s >> t ;
    ll c=1,j=0;
    for (ll i = 0 ; i < t.length() ; i++) 
    {
        if(t[i]==s[j])
        {
            j++;
            c++;    
        }
        
    }
    cout<<c<<endl;
    

    
}
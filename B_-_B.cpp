#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;


int main()
{
    string s;
    cin>>s;
    ll count=1;
    for (int i = 0 ; i < s.size() ; i++) 
    {
        if(s[i]==s[i+1]) count++;
        else
        {
            cout<<s[i]<<count;
            count=1;
        }
    }
}
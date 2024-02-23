#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;


int main()
{
    ll n,t;
    cin >> n >> t ;
    string s;
    cin>>s;
    for (ll i = 0 ; i < t ; i++) 
    {
        for (ll j = 0 ; j < n-1 ; j++)
        {
            if(s[j]=='B' && s[j+1]=='G')
            {
                swap(s[j+1],s[j]);
                j++;
            }
        }
    }
    cout<<s<<endl;
    
    

    
}
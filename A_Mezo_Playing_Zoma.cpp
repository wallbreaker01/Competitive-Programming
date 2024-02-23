#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

/* Vogoban please code ta accept korai dew >.< */

int main()
{
    ll n,r=0,l=0;
    cin >> n;
    string s;
    cin >> s;
    for (ll i = 0 ; i < n ; i++) 
    {
        if (s [i] == 'R') r ++;
        if (s [i] == 'L') l ++;
    }
    cout<<r+l+1<<endl;

    
}
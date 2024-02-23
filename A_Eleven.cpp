#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

/* Vogoban please code ta accept korai dew >.< */

int main()
{
    ll n , c=0,c2=1;
    cin >> n;
    for (ll i = 1 ; i <= n ; i++) 
    {
        if(c+c2==i)
        {
            cout<<"O";
            c=c2;
            c2=i;
        }
        else cout<<"o";
    }
    
}
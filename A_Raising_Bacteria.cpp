#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

/* Vogoban please code ta accept korai dew >.< */

int main()
{
    ll n, c = 0;
    cin >> n;
    while(n>0)
    {
        c=c+n%2;
        n=n/2;
    }
    cout<<c<<endl;
    
   
}
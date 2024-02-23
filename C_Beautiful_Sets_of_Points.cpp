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
    ll mn=min(n,m);
    cout<<mn+1<<endl;
    for (ll i = 0 ; i <= mn ; i++) 
    {
        cout<<i<<" "<<mn-i<<endl;
    }
    

    
}
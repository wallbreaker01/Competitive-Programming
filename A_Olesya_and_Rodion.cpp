#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

/* Vogoban please code ta accept korai dew >.< */

int main()
{
    ll n,t;
    cin >> n >> t ;
    if(n==1 && t==10) cout<<-1<<endl;
    else
    {
        if(t==10) t=1;
        cout<<t;
        for(ll i = 2 ; i <= n ; i++) cout<<0;  
    }
   
}
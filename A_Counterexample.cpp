#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

/* Vogoban please code ta accept korai dew >.< */

int main()
{
    ll l,r;
    cin >> l >> r ;
    if(l%2) l++;
    if(l+2>r) cout<<-1<<endl;
    else cout<<l<<" "<<l+1<<" "<<l+2<<endl;
   
}
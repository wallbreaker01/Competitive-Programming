#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;


int main()
{
    ll n,m;
    cin >> n >> m ;
    if(n==1) cout<<m-1<<endl;
    else if(m==1) cout<<n-1<<endl;
    else cout<<(m-1)*n<<endl;
    
}
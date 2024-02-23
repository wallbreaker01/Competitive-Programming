#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;


int main()
{
    ll n;
    cin >> n;
    set<string>s;
    string s1,s2,sum;
    while(n--)
    {
        cin>>s1>>s2;
        sum=s2+s1;
        s.insert(sum);
    }
    cout<<s.size()<<endl;    
}
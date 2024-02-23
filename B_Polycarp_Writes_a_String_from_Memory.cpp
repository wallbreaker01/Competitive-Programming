#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

void solve()
{
    string s;
    cin>>s;
    int count=0;
    set<char>v;
    for (int i = 0 ; i < s.size() ; i++) 
    {
        v.insert(s[i]);
        if(v.size()==4)
        {
            count++;
            v.clear();
            v.insert(s[i]);
        }
    }
    if(v.size()!=0)
    {
        count++;
    }
    cout<<count<<endl;


}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}

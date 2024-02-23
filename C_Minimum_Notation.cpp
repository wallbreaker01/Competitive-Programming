#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll mx = INT_MAX;
const ll mn = INT_MIN;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    string s;
    cin >> s;
    char mn='9';
    for( int i = s.size() - 1 ; i >= 0 ; i--)
    {
        if(s[i]!='9' and s[i]>mn) s[i]++;
        else if(s[i]<mn) mn=s[i];
    }
    sort(s.begin(),s.end());
    cout<<s<<endl;
    
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

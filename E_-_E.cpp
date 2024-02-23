#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll mx = INT_MAX;
const ll mn = INT_MIN;

/* Vogoban please code ta accept korai dew >.< */

int main()
{
    string s;
    while(cin >> s && s!="#")
    {
        if(next_permutation( s.begin(),s.end() ) ) cout<<s<<endl;
        else cout<<"No Successor"<<endl;
    }

}

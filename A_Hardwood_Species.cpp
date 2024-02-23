#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fastio                        \
{                                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
}

int main()
{
    int t;
    scanf("%d\n\n",&t);
    while(t--)
    {
        string s;
        map<string ,double>m;
        ll c=0;
        while(getline(cin,s))
        {
            if(s.empty()) break;
            m[s]++;
            c++;
        }
        for(auto x : m)
        {
            cout<<x.first<<" "<<fixed<<setprecision(4)<<(x.second*100)/c<<endl;
        }
        if(t) cout<<endl;
    }

}




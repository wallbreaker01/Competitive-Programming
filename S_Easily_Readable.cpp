#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
#define fastio                        \
{                                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
}

int main()
{
    ll t;
    cin >> t;
    for( ll i = 1 ; i <= t ; i++)
    {
        ll n;
        cin >> n;
        map<string,ll>m;
        while(n--)
        {
            string s;
            cin >> s;
            if(s.size()>2) sort(s.begin()+1,s.end()-1);
            m[s]++;
        }
        ll q;
        cin >> q;
        getchar();
        cout<<"Case "<<i<<":\n";
        while(q--)
        {
            string s;
            getline(cin,s);
            ll ans=1;
            string a;
            stringstream temp(s);
            while(temp>>a)
            {
                if(a.size()>2) sort(a.begin()+1,a.end()-1);
                ans*=m[a];
            }
            cout<<ans<<endl;
        }
    }
    

}
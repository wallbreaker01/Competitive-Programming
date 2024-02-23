#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
 



int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        ll i;
        string s;
        cin >> s;
        ll ans=true;
        for (i = 1 ; i <= s.size() ; i++) 
        {
            if(s.size()%i!=0) continue;
            for (ll j = 1 ; j < s.size() ; j++)
            {
                if(s[j]!=s[j%i])
                {
                    ans=false;
                    break;
                }
            }
            if(ans) break;
            ans=true;
        }
        printf("%d\n",i);
        if(t) printf("\n");
    }
}

#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int s[n];
        for(int i=0;i<n;i++) cin>>s[i];
        int c=0;
        for(int i=0;i<n;i++){
            if(s[i]==(i+1)) c++;
        }
        if(c%2){
            cout<<(c/2)+1<<endl;
        }
        else{
            cout<<c/2<<endl;
        }
    }
}
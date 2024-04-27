#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back

void solve() {
    string n;
    cin >> n;
    ll hour = stoi(n.substr(0, 2));
    ll minute = stoi(n.substr(3, 2));
    char colon = n[2];
    string period = (hour < 12) ? "AM" : "PM";
    if (hour == 0) hour = 12;
    else if (hour > 12) hour -= 12;
    cout << (hour < 10 ? "0" : "") << hour << ":" << (minute < 10 ? "0" : "") << minute << " " << period << endl;
}

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        solve();
    }
    
    return 0;
}

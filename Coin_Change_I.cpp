#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back

const int MOD = 100000007;

int main()
{
    int t;
    cin >> t;
    for (int m= 1; m <= t; m++)
    {
        int n, K;
        cin >> n >> K;
        vector<int> A(n), C(n), ans(K + 1);
        ans[0] = 1;
        for (int i = 0; i < n; i++) cin >> A[i];
        for (int i = 0; i < n; i++) cin >> C[i];
        for (ll i = 0; i < n; i++)
        {
            for (ll j = K; j >= 0; j--)
            {
                ll sum = 0;
                for (ll k = 1; k <= C[i]; k++)
                {
                    if (j - k * A[i] < 0)
                        break;
                    sum = (sum + ans[j - k * A[i]]) % MOD;
                }
                ans[j] = (sum + ans[j]) % MOD;
            }
        }
        cout << "Case " << m << ": " << ans[K] << endl;
    }
    return 0;
}
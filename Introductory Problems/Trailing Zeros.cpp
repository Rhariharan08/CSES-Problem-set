#include <bits/stdc++.h>

using namespace std;

#define nl '\n'
#define sp ' '
#define ll long long
#define ull unsigned long long

// Constants
const ll MOD = 1e9 + 7;

void solve() {
    ll a, cnt=0;
    cin >> a;

    if(a<5)
    {
        cout << 0 << nl;
        return ;
    }

    while(a > 0)
    {
        cnt += a / 5;
        a = a / 5;
    }

    cout << cnt;
}

/* Time: O(t), Space : O(1)
 */

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // int t = 1;
    // cin >> t;
    // while (t--)
        solve();
}

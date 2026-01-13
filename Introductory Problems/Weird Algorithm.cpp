#include <bits/stdc++.h>
using namespace std;
 
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define int long long
#define endl "\n"
 
int32_t main() {
    fastio;
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
 
    long n;
    cin >> n;
    // cout  << n << " ";
    while(n != 1)
    {
        cout << n << " ";
        if(n%2==0)
        {
            n = n / 2;
 
        }
        else
        {
            n = n * 3 + 1;
        }
    }
    cout << n;
    return 0;
}

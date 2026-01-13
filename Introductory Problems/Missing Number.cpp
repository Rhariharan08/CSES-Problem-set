#include <bits/stdc++.h>
using namespace std;
 
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
 
int main() {
    fastio;
 
    long long n;
    cin >> n;
 
    long long tot = 0;
    for (long long i = 0; i < n - 1; i++) {
        long long x;
        cin >> x;
        tot += x;
    }
 
    long long actual_val = n * (n + 1) / 2;
 
    cout << (actual_val - tot);
    return 0;
}

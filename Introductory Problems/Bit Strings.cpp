#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
long long int modPow(long long int base, long long exp)
{
    long long int res = 1;
    base = base % MOD;
    while(exp > 0)
    {
        if(exp & 1)
        {
            res = (res * base) % MOD;
        }
        base = (base * base) % MOD;
        exp >>= 1;
    }
    return res;
}
int main() {
    long long n;
    long long int ans;
    cin >> n;

    ans = modPow(2, n);
    cout << ans;
    return 0;
}

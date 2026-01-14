#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    for(size_t k=1;k<=n;k++)
    {
        if(k == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            long long tc_cells = k * k;
            long long tot = (tc_cells * (tc_cells - 1)) / 2;
 
            long long slabs = (k - 2) * (k - 1) * 2 * 2;
            cout << tot - slabs << endl;
        }
    }
    return 0;
}

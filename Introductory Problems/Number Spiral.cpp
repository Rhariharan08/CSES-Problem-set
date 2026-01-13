#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long t;
    cin >> t;
 
    while (t--) {
        long long row, col, ans;
        cin >> row >> col;
 
        if (row > col) {
            if (row % 2 == 1) {
                ans = (row - 1) * (row - 1) + col;
            } else {
                ans = row * row - col + 1;
            }
        } else {
            if (col % 2 == 1) {
                ans = col * col - row + 1;
            } else {
                ans = (col - 1) * (col - 1) + row;
            }
        }
 
        cout << ans << endl;
    }
 
    return 0;
}

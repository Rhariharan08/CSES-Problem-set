#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    // No valid solution for n = 2 or 3
    if (n == 2 || n == 3) {
        cout << "NO SOLUTION";
        return 0;
    }
 
    vector<int> res;
 
    // Add even numbers
    for (int i = 2; i <= n; i += 2) {
        res.push_back(i);
    }
 
    // Add odd numbers
    for (int i = 1; i <= n; i += 2) {
        res.push_back(i);
    }
 
    // Output result
    for (int x : res) {
        cout << x << " ";
    }
 
    return 0;
}

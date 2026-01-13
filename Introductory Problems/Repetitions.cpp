#include <bits/stdc++.h>
using namespace std;

int main() {

    string name;
    cin >> name;

    if (name.empty()) {
        cout << 0;
        return 0;
    }

    int ans = 1;
    int countCharacters = 1;

    for (size_t i = 1;i<name.size(); i++) {
        if (name[i] == name[i - 1]) {
            countCharacters++;
        } else {
            countCharacters = 1;
        }
        ans = max(ans, countCharacters);
    }
    cout << ans;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long n;
    cin >> n;

   vector<long long> arr(n);
   for(size_t i=0;i<n;i++)
   {

       cin >> arr[i];
   }

    long long ans = 0;

    for (size_t i = 1;i<arr.size(); i++)
    {
        if (arr[i] < arr[i - 1])
        {
            int diff = arr[i-1] - arr[i];
            ans += diff;
            arr[i] += diff;
        }
    }

    cout << ans;
    return 0;
}

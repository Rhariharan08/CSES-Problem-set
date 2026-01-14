#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n;
    cin >> n;
    vector<long long> arr1;
    vector<long long> arr2;
 
    long long ans = (n * (n + 1)) / 2;
 
    if(ans % 2 == 0)
    {
        cout << "YES" << endl;
        ans = ans / 2;
    }
    else
    {
        cout << "NO" << endl;
        return 0;
    }
    for(size_t i=n;i>=1;i--)
    {
        if(ans >= i)
        {
            arr1.push_back(i);
            ans = ans - i;
        }
        else
        {
            arr2.push_back(i);
        }
    }
 
    if(!arr1.empty())
    {
        cout << arr1.size() << endl;
        for(size_t i=0;i<arr1.size();i++)
        {
            cout << arr1[i] << " ";
        }
    }
    cout << endl;
    if(!arr2.empty())
    {
        cout << arr2.size() << endl;
        for(size_t i=0;i<arr2.size();i++)
        {
            cout << arr2[i] << " ";
        }
    }
    return 0;
}

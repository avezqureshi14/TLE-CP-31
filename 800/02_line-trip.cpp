#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        int ans = 0;
        int prev = 0;
        for (int i = 0; i < n; i++)
        {
            int curr;
            cin >> curr;
            ans = max(ans, curr - prev);
            prev = curr;
        }
        ans = max(ans, 2 * (x - prev));
        cout << ans << endl;
    }

    return 0;
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using u_mp = unordered_map<int, int>;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        u_mp mp;
        bool yes = true;
        for (int i = 0; i < n; i++)
        {
            mp[arr[i]]++;
            if (mp.size() > 2)
            {
                yes = false;
                break;
            }
        }
        if (mp.size() == 2)
        {
            int f1 = begin(mp)->second;
            if (f1 != n / 2 && f1 != (n + 1) / 2)
            {
                yes = false;
            }
        }
        if (yes)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
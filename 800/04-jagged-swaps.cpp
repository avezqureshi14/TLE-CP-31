#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if (arr[0] != 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}

// here in this question it was said that index will be starting from 1 (they have said 2 considering 1 based index array) that's why the first  indexes 0 or first number is not going to be changed therefore anyway we will be needing the first element to be in a sorted array from their side , and the first element is always going to be 1 as the element are going to start from 1 to n to be a permutation , that's why a simple check that if the starting element is not 1 that it cannot be sorted
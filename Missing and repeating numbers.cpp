#include <bits/stdc++.h>

pair<int, int> missingAndRepeating(vector<int> &arr, int n)
{
    // Write your code here
    for (int i = 0; i < arr.size(); i++)
    {
        while (arr[i] != i + 1)
        {
            if (arr[i] == arr[arr[i] - 1])
                break;
            swap(arr[i], arr[arr[i] - 1]);
        }
    }
    for (int i = 0; i < arr.size(); i++)
        if (arr[i] != i + 1)
            return {i + 1, arr[i]};
}

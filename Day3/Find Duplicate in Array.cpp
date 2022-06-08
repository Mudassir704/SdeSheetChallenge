#include <bits/stdc++.h>
int findDuplicate(vector<int> &arr, int n)
{
    for (int i = 0; i < arr.size(); i++)
    {
        while (arr[i] != i + 1)
        {
            //             cout << arr[i] <<  " " << arr[arr[i] - 1] << '\n';
            if (arr[i] == arr[arr[i] - 1])
                return arr[i];
            swap(arr[i], arr[arr[i] - 1]);
        }
    }
}

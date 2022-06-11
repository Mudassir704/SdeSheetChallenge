#include <bits/stdc++.h>
vector<vector<int>> findTriplets(vector<int> arr, int n, int K)
{
    sort(arr.begin(), arr.end());
    set<vector<int>> st;
    vector<vector<int>> res;
    for (int i = 0; i < n - 1; i++)
    {
        int l = i + 1;
        int r = n - 1;
        while (l < r)
        {
            int s = arr[i] + arr[l] + arr[r];
            if (s == K)
            {
                st.insert({arr[i], arr[l], arr[r]});
                l++;
                r--;
            }
            else if (s > K)
                r--;
            else
                l++;
        }
    }
    for (auto i : st)
        res.push_back(i);
    return res;
}
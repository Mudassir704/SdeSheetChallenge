#include <bits/stdc++.h>
int LongestSubsetWithZeroSum(vector<int> arr)
{
    unordered_map<int, int> mp;
    int mx = 0, curr = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        curr += arr[i];

        if (arr[i] == 0)
            mx = max(mx, 1);
        if (curr == 0)
            mx = max(mx, i + 1);
        if (mp.find(curr) != mp.end())
        {
            mx = max(mx, abs(i - mp[curr]));
        }
        else
            mp[curr] = i;
    }
    return mx;
}
#include <bits/stdc++.h>
vector<vector<int>> pairSum(vector<int> &arr, int s)
{
    unordered_map<int, int> mp;
    vector<vector<int>> res;
    for (int i = 0; i < arr.size(); i++)
    {
        int temp = s - arr[i];
        if (mp.find(temp) != mp.end() && mp[temp] != 0)
        {
            int t = mp[temp];
            while (t--)
            {
                if (temp < arr[i])
                    res.push_back({temp, arr[i]});
                else
                    res.push_back({arr[i], temp});
                //                 mp[temp]--;
            }
        }
        mp[arr[i]]++;
    }
    sort(res.begin(), res.end());
    return res;
}
s
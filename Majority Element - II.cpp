#include <bits/stdc++.h>
vector<int> majorityElementII(vector<int> &arr)
{
    map<int, int> mp;
    vector<int> v;
    for (int i : arr)
        mp[i]++;
    for (auto i : mp)
        if (i.second > arr.size() / 3)
            v.push_back(i.first);
    return v;
}
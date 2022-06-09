#include <bits/stdc++.h> 
int subarraysXor(vector<int> &arr, int x)
{
    int ans = 0;
    vector<int> xorArr(arr.size());
    unordered_map<int, int> mp;
    xorArr[0] = arr[0];
    for (int i = 1; i < arr.size(); i++)
        xorArr[i] = xorArr[i - 1] ^ arr[i];

    for (int i = 0; i < arr.size(); i++) {
        int tmp = x ^ xorArr[i];
        ans = ans + ((int)mp[tmp]);
        if (xorArr[i] == x)
            ans++;
        mp[xorArr[i]]++;
    }

    return ans;
}
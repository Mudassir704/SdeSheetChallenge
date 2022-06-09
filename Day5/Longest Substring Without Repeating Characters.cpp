#include <bits/stdc++.h>
int uniqueSubstrings(string input)
{
    map<int, int> mp;
    int i = 0, len = 0;
    for (int j = 0; j < input.length(); j++)
    {
        i = max(i, (mp.find(input[j]) == mp.end() ? -1 : mp[input[j]]) + 1);
        len = max(len, j - i + 1);
        mp[input[j]] = j;
    }
    return len;
}
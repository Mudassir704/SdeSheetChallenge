#include <bits/stdc++.h>

bool compareInterval(vector<int> i1, vector<int> i2)
{
    if (i1[0] == i2[0])
        return i1[2] < i2[2];
    else
        return (i1[0] < i2[0]);
}
vector<int> maximumMeetings(vector<int> &start, vector<int> &end)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> res;
    int n = start.size();
    vector<vector<int>> v(n);
    for (int i = 0; i < n; i++)
    {
        v[i].push_back(end[i]);
        v[i].push_back(start[i]);
        v[i].push_back(i + 1);
    }

    sort(v.begin(), v.end(), compareInterval);
    int last = v[0][0];
    res.push_back(v[0][2]);
    for (int i = 1; i < n; i++)
    {
        if (v[i][1] > last)
        {
            res.push_back(v[i][2]);
            last = v[i][0];
        }
    }
    return res;
}
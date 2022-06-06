#include <bits/stdc++.h>
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    sort(intervals.begin(), intervals.end());
    deque<pair<int, int>> st;
    for (int i = 0; i < intervals.size(); i++)
    {
        if (st.empty())
            st.push_back({intervals[i][0], intervals[i][1]});
        else
        {
            pair<int, int> p = st.back();
            if (p.second >= intervals[i][0])
            {
                st.pop_back();
                st.push_back({p.first, (intervals[i][1] > p.second ? intervals[i][1] : p.second)});
            }
            else
            {
                st.push_back({intervals[i][0], intervals[i][1]});
            }
        }
    }
    vector<vector<int>> v;
    while (!st.empty())
    {
        pair<int, int> p = st.front();
        st.pop_front();
        v.push_back({p.first, p.second});
    }

    return v;
}

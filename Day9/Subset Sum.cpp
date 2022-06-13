vector<int> subsetSum(vector<int> &num)
{
    vector<int> ans;
    int n = pow(2, num.size());
    for (int i = 1; i <= n; i++)
    {
        int s = 0;
        for (int j = 0; j < num.size(); j++)
        {
            if (i & (1 << j))
                s += num[j];
        }
        ans.push_back(s);
    }
    sort(ans.begin(), ans.end());
    return ans;
}
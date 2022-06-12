int longestSubSeg(vector<int> &arr, int n, int k)
{
    int j = 0;
    int cnt = 0, mx = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            cnt++;
        while (cnt > k)
        {
            if (arr[j] == 0)
                cnt--;
            j++;
        }
        mx = max(mx, i - j + 1);
    }
    return mx;
}

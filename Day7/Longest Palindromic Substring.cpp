string longestPalinSubstring(string str)
{
    int mxlen = 0;
    int n = str.length();
    int start = 0;
    for (int i = 0; i < n; i++)
    {
        int low = i - 1;
        int high = i + 1;
        while (high < n && str[high] == str[i])
            high++;
        while (low >= 0 && str[low] == str[i])
            low--;
        while (low >= 0 && high < n && str[low] == str[high])
            low--, high++;
        int mx = high - low - 1;
        if (mx > mxlen)
        {
            start = low + 1;
            mxlen = mx;
        }
    }
    return str.substr(start, mxlen);
}
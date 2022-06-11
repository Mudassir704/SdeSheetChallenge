vector<vector<int>> dp;

int solve(vector<int> &price, int idx, int n)
{
    if (idx == 0)
        return n * price[0];
    if (dp[idx][n] != -1)
        return dp[idx][n];
    int rodlength = idx + 1;
    int cut = INT_MIN;
    if (rodlength <= n)
        cut = price[idx] + solve(price, idx, n - rodlength);
    return dp[idx][n] = max(solve(price, idx - 1, n), cut);
}

int cutRod(vector<int> &price, int n)
{
    dp.assign(n, vector<int>(n + 1, -1));
    return solve(price, n - 1, n);
}

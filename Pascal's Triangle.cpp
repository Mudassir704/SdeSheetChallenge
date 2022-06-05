#include <bits/stdc++.h>
vector<vector<long long int>> printPascal(int n)
{
    vector<vector<long long int>> vec(n);
    for (int i = 1; i <= n; i++)
    {
        long long int n = 1;
        for (int j = 1; j <= i; j++)
        {
            vec[i - 1].push_back(n);
            n = n * (i - j) / j;
        }
    }
    return vec;
}
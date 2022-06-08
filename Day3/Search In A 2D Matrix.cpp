#include <bits/stdc++.h>
#include <vector>

bool findTargetInMatrix(vector<vector<int>> &mat, int m, int n, int target)
{
    int l = 0, r = m * n - 1;
    while (l != r)
    {
        int mid = (l + r - 1) >> 1;
        if (mat[mid / n][mid % n] == target)
            return true;
        else if (mat[mid / n][mid % n] > target)
            r = mid;
        else
            l = mid + 1;
    }
    return mat[r / n][r % n] == target;
}
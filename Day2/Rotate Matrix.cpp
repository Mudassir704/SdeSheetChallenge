#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    int row = 0, col = 0;
    int p, c;
    while (row < n && col < m)
    {
        if (row + 1 == n || col + 1 == m)
            break;
        p = mat[row + 1][col];
        for (int i = col; i < m; i++)
        {
            c = mat[row][i];
            mat[row][i] = p;
            p = c;
        }
        row++;
        for (int i = row; i < n; i++)
        {
            c = mat[i][m - 1];
            mat[i][m - 1] = p;
            p = c;
        }
        m--;
        if (row < n)
        {
            for (int i = m - 1; i >= col; i--)
            {
                c = mat[n - 1][i];
                mat[n - 1][i] = p;
                p = c;
            }
        }
        n--;
        if (col < m)
        {
            for (int i = n - 1; i >= row; i--)
            {
                c = mat[i][col];
                mat[i][col] = p;
                p = c;
            }
        }
        col++;
    }
}
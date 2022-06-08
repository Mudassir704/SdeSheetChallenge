#include <bits/stdc++.h>
int modularExponentiation(int x, int n, int m)
{
    int res = 1;
    long long c = x;
    c = c % m;

    if (c == 0)
        return 0;

    while (n > 0)
    {
        if (n & 1)
            res = (res * c) % m;
        n = n >> 1;
        c = (c * c) % m;
    }
    return res;
}
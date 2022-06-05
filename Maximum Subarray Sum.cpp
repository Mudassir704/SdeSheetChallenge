#include <bits/stdc++.h>
long long maxSubarraySum(int arr[], int n)
{
    long long sum = 0, mx = 0;
    for (int i = 0; i < n; i++)
    {
        sum = max((long long)arr[i], sum + arr[i]);
        mx = max(mx, sum);
    }
    return mx;
}
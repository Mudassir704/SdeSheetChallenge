#include <bits/stdc++.h>
long getTrappedWater(long *arr, int n)
{
    int leftMax = 0, rightMax = 0;
    int l = 0, r = n - 1;
    int ans = 0;
    while (l <= r)
    {
        if (arr[l] > arr[r])
        {
            if (rightMax < arr[r])
                rightMax = arr[r];
            else
                ans += (rightMax - arr[r]);
            r--;
        }
        else
        {
            if (leftMax < arr[l])
                leftMax = arr[l];
            else
                ans += (leftMax - arr[l]);
            l++;
        }
    }
    return ans;
}
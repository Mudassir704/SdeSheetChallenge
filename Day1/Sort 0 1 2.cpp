#include <bits/stdc++.h>
void sort012(int *arr, int n)
{
    int lo = 0, hi = n - 1, mid = 0;
    while (mid <= hi)
    {
        if (arr[mid] == 0)
            swap(arr[lo++], arr[mid++]);
        else if (arr[mid] == 1)
            mid++;
        else
            swap(arr[mid], arr[hi--]);
    }
}
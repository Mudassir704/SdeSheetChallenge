#include <bits/stdc++.h>
int findMajorityElement(int arr[], int n)
{
    int maj = arr[0];
    int majlen = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == maj)
            majlen++;
        else
        {
            majlen--;
            if (majlen == 0)
                maj = arr[i], majlen = 1;
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] == maj)
            cnt++;
    if (cnt > n / 2)
        return maj;
    return -1;
}
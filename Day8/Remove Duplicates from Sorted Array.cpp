int removeDuplicates(vector<int> &arr, int n)
{
    int cnt = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
            cnt++;
        else
            arr[i - cnt] = arr[i];
    }
    return n - cnt;
}
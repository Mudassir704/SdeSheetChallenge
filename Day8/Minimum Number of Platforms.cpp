int calculateMinPatforms(int at[], int dt[], int n)
{
    vector<int> freq(2400, 0);
    for (int i = 0; i < n; i++)
        freq[at[i]]++, freq[dt[i] + 1]--;
    for (int i = 1; i < 2400; i++)
        freq[i] += freq[i - 1];
    return *max_element(freq.begin(), freq.end());
}
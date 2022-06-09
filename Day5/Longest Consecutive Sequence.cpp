#include <bits/stdc++.h> 
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    sort(arr.begin(), arr.end());
    int len = 1, ans =1;
    int prev = arr[0];
    for(int i = 1;i < n;i++){
//         cout << arr[i] << " " << prev <<  "\n";
        if(arr[i] == prev + 1)
            len++, prev++;
        else{
            if(arr[i] != prev){
                prev = arr[i];
                ans = max(ans, len);
                len = 1;
            }
        }
    }
    ans = max(ans, len);
    return ans;
}s
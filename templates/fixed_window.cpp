#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int solveFixedWindow(const vector<int>& nums, int k){
    int n=nums.size();
    if(n < k) return -1;  // edge case: if array smaller than window

    int current_window_sum=0;
    // Step 1: Pehli window (0 se k-1 taak) initialize karo
    for(int i=0; i<k; ++i) {
        current_window_sum += nums[i];
    }

    int max_ans = current_window_sum;       // ans start with first window result

    // Step 2: Window ko aage slide karo (from k to n-1)
    for(int i=k; i<n; ++i){
        current_window_sum += nums[i];      // Naya element right se add karo
        current_window_sum -= nums[i-k];    // Purana element left se remove karo

        max_ans = max(max_ans, current_window_sum); // update global answer
    }
    return max_ans;
}
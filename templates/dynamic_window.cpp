#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int solveDynamicWindow(const vector<int>& nums, int target) {
    int left=0;
    int ans=0;      // track max length, min length, or count

    // window ko initialize karo (e.g., sum, hashmap, freq array)
    int current_window_state=0;

    for(int right=0; right<nums.size(); ++right){
        // Step 1: Expand window by including nums[right]
        current_window_state += nums[right];

        // Step 2: Shrink window from left while the condition is violated
        while(left<=right && /*condition violated*/) {
            current_window_state -= nums[left];
            left++;
        }

        // Step 3: Update ans with the valid window(right-left+1)
        ans = max(ans, right-left+1);
    }
    return ans;
}
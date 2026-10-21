#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int solveDynamicWindow(const vector<int>& nums, int target) {
    int left=0;
    int ans=0;

    int current_window_state=0;
    for(int right=0; right<nums.size(); ++right){
        current_window_size += nums[right];
        while(left<=right && /*condition violated*/) {
            current_window_state -= nums[left];
            left++;
        }
        ans = max(ans, right-left+1);
    }
    return ans
}
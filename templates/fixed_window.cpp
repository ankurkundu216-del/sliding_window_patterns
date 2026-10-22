#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int solveFixedWindow(const vector<int>& nums, int k){
    int n=nums.size();
    if(n < k) return -1;

    int current_window_sum=0;
    for(int i=0; i<k; ++i) {
        current_window_sum += nums[i];
    }
    int max_ans = current_window_sum;
    for(int i=k; i<n; ++i){
        current_window_sum += nums[i];
        current_window_sum -= nums[i-k];

        max_ans = max(max_ans, current_window_sum);
    }
    return max_ans;
}

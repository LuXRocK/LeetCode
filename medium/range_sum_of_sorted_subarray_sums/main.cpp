#include <vector>
#include <iostream>
#include <bits/stdc++.h>

int rangeSum(std::vector<int>& nums, int n, int left, int right){
    long long result = 0;
    std::vector<long long> new_nums;
    for(int i = 0; i < n; i++){
        new_nums.push_back(nums[i]);
        long long new_num = nums[i];
        for(int j = i+1; j < n; j++){
            new_num += nums[j];
            new_nums.push_back(new_num);
        }
    }
    std::sort(new_nums.begin(), new_nums.end());
    for(int i = left - 1; i <= right - 1; i++){
        result += new_nums[i];
    }
    return result;
}

int main(){
    std::cout << "Hello world!" << std::endl;
    std::vector<int> nums = {1,2,3,4};
    int n = 4, left = 1, right = 5;
    rangeSum(nums, n, left, right);
    return 0;
}
#include <iostream>
#include <vector>
#include <cstdlib>
#include <bits/stdc++.h>

std::vector<int> leftRightDifference(std::vector<int>& nums){
    std::vector<int> leftSum;
    std::vector<int> rightSum;
    std::vector<int> result;
    int left = 0, right = 0;
    for(int i = 0; i < nums.size(); i++){
        left = std::accumulate(nums.begin(), nums.begin()+i, left);
        right = std::accumulate(nums.begin()+i+1, nums.end(), right);
        leftSum.push_back(left);
        rightSum.push_back(right);
        left = 0;
        right = 0;
    }
    for(int i = 0; i < nums.size(); i++){
        result.push_back(std::abs(leftSum[i] - rightSum[i]));
    }
    return result;
}

int main(){
    std::vector<int> nums {10, 4, 8, 3};
    leftRightDifference(nums);
    return 0;
}
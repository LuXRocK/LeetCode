#include <iostream>
#include <vector>
#include <bits/stdc++.h>

int numSubarrayProductLessThanK(std::vector<int>& nums, int k){
    int left = 0, right = 0, product = 1, count = 0;
    if(k <= 1) return 0;
    while(right < nums.size()){
        product *= nums[right];
        while(product >= k) product /= nums[left++];
        count += 1 + (right - left);
        right++;
    }
    return count;
}

int main(){
    std::vector<int> nums = {1,2,3};
    int k = 0;
    numSubarrayProductLessThanK(nums, k);
    std::cout << "Hello World!" << std::endl;
    return 0;
}
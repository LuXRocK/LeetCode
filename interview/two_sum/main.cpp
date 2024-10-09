#include <iostream>
#include <vector>
#include <map>
#include <bits/stdc++.h>

std::vector<int> twoSum(std::vector<int>& nums, int target){
    std::vector<int> result;
    std::map<int, int> mp;
    for(int i = 0; i < nums.size(); i++){
        mp[nums[i]] = i;
    }
    for(int i = 0; i < nums.size(); i++){
        int remainder = target - nums[i];
        if(mp.find(remainder) != mp.end() && mp[remainder] != i){
            result.push_back(i);
            result.push_back(mp[remainder]);
            break;
        }
    }
    return result;
}

int main(){
    std::cout << "Hello, World!" << std::endl;
    std::vector<int> nums {-1,-2,-3,-4,-5};
    int target = -8;
    twoSum(nums, target);
    return 0;
}
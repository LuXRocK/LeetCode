#include <iostream>
#include <vector>
#include <map>
#include <bits/stdc++.h>

std::vector<int> frequencySort(std::vector<int>& nums){
    std::map<int, int> mp;
    std::vector<int> result;
    for(int i = 0; i < nums.size(); i++){
        mp[nums[i]]++;
    }
    std::sort(nums.begin(), nums.end(), [&](int a, int b){
        if(mp[a] != mp[b]){return mp[a] < mp[b];}
        else{return b < a;}
    });
    return nums;
}

int main(){
    // std::cout << "Hello world!" << std::endl;
    std::vector<int> nums = {2, 3, 1, 3, 2};
    frequencySort(nums);
    return 0;
}
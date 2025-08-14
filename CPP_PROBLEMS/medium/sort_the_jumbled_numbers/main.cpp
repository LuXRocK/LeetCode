#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <bits/stdc++.h>
#include <algorithm>

std::vector<int> sortJumbled(std::vector<int>& mapping, std::vector<int>& nums){
    std::map<int, int> mp;
    std::vector<int> new_nums;
    for(int i = 0; i < nums.size(); i++){
        std::string num = "";
        int num_cp = nums[i];
        if(num_cp == 0){new_nums.push_back(mapping[num_cp]);}
        else{while(num_cp > 0){
            num += std::to_string(mapping[num_cp % 10]);
            num_cp /= 10;
        }
        std::reverse(num.begin(), num.end());
        new_nums.push_back(std::stoi(num));}
        
    }

    for(int i = 0; i < nums.size(); i++){
        mp[nums[i]] = new_nums[i];
    }

    std::sort(nums.begin(), nums.end(), [&](int a, int b){
        if(mp[a] != mp[b]){return mp[a] < mp[b];}
        else{
            auto ita = std::find(nums.begin(), nums.end(), a);
            auto itb = std::find(nums.begin(), nums.end(), b);
            int indexa = ita - nums.begin();
            int indexb = itb - nums.begin();
            return indexa < indexb;
        }
    });

    return nums;
}

int main(){
    std::vector<int> nums = {9,99,999,9999,999999999};
    std::vector<int> mapping = {9,8,7,6,5,4,3,2,1,0};
    sortJumbled(mapping, nums);
    return 0;
}
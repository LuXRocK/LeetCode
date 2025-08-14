#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

std::vector<int> singleNumber(std::vector<int>& nums){
    std::map<int, int> nums_mapped;
    std::vector<int> nums_uniqe;
    std::vector<int> result;
    for(const auto i : nums){
        nums_uniqe.push_back(i);
    }    
    std::sort(nums_uniqe.begin(), nums_uniqe.end());
    std::vector<int>::iterator ip;
    ip = std::unique(nums_uniqe.begin(), nums_uniqe.end());
    nums_uniqe.resize(std::distance(nums_uniqe.begin(), ip));
    for(const auto i : nums_uniqe){
        nums_mapped.insert({i, 0});
    }
    for(const auto i : nums){
        nums_mapped[i]++;
    }
    for(const auto i : nums_mapped){
        if(i.second == 1){
            result.push_back(i.first);
        }
    }
    return result;
}



int main(){
    std::vector<int> nums {1,2,1,3,2,5};
    singleNumber(nums);
    return 0;
}
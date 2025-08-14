#include <iostream>
#include <vector>
#include <map>

int firstMissingPositive(std::vector<int>& nums){
    std::map<int, int> occurances;
    for(int i = 1; i <= nums.size(); i++){
        occurances.insert({i, 0});
    }
    for(const auto& i : nums){
        if(occurances.find(i) != occurances.end()){
            occurances[i]++;
        }
    }
    for(const auto& i : occurances){
        if(!i.second) return i.first;
    }
    return nums.size()+1;
}

int main(){
    std::vector<int> nums = {7,8,9,11,12};
    std::cout << firstMissingPositive(nums) << std::endl;
    std::cout << "Hello Wordl!" << std::endl;
    return 0;
}
#include <vector>
#include <iostream>
#include <map>

std::vector<int> findDuplicates(std::vector<int>& nums){
    std::map<int, int> occurences; //make map for all the values and how mant times they occur 
    std::vector<int> result;    //make vector for the duplicate values
    //fill the map with numbers from 1 to n as keys and initialize their values as 0
    for(int i = 1; i <= nums.size(); i++){
        occurences.insert({i, 0});
    }
    //go through nums and increase values of occurences
    for(int i = 0; i < nums.size(); i++){
        occurences[nums[i]]++;
    }
    //add keys that have value higher than 1 to result 
    for(const auto& i : occurences){
        if(i.second > 1) result.push_back(i.first);
    }
    return result;
}

int main(){
    std::vector<int> nums = {4,3,2,7,8,2,3,1};
    findDuplicates(nums);
    std::cout << "Hello World!" << std::endl;
    return 0;
}
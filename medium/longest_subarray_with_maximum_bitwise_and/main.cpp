#include <vector>
#include <iostream>
#include <stdio.h>


int longestSubarray(std::vector<int>& nums){
    int max_number = 0;
    for(auto i : nums){
        if(i > max_number) max_number = i;
    }
    int longest_sub = 0;
    int current_sub = 1;
    if(nums.size() == 1){
        return 1;
    }
    for(int i = 1; i < nums.size(); i++){
        if(nums[i] == max_number && nums[i-1] == max_number){
            current_sub += 1;
        }
        if(nums[i] != max_number){
            current_sub = 1;
        }   
        if(current_sub > longest_sub){
            longest_sub = current_sub;
        }
    }
    return longest_sub;
}

int main(){
    std::vector<int> nums {1,2,3,4};
    int a = 3;
    int b = 3;
    int c = a & b;
    std::cout << c << std::endl;
    std::cout << longestSubarray(nums) << std::endl;
}
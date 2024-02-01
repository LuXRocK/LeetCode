#include <iostream>
#include <vector>

bool hasTrailingZeroes(std::vector<int>& nums){
    auto res = nums[0] | nums[1];
    std::cout << res << std::endl;
}

int main(){
    std::vector<int> nums {2,4};
    hasTrailingZeroes(nums);
}
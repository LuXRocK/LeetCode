#include <iostream>
#include <vector>

int search(std::vector<int>& nums, int target){
    int l = 0;
    int r = nums.size()-1;

    while(l <= r){
        int m = (l + r)/2;
        if(target < nums[m]){
            r = m - 1;
        }else if(target > nums[m]){
            l = m + 1;
        }else{
            return m;
        }
    }
    return -1;
}

int main(){
    std::cout << "Hello, World!" << std::endl;
    std::vector<int> nums {-1, 0, 3, 5, 9, 12};
    int target = 2;
    std::cout << search(nums, target) << std::endl;
    return 0;
}
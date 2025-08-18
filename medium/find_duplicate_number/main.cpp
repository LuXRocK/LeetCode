#include <iostream>
#include <vector>

int findDuplicate(std::vector<int>& nums){
    int tortoise = nums[0];
    int hare = nums[0];

    while(true){
        tortoise = nums[tortoise];
        hare = nums[nums[hare]];

        if(tortoise == hare){
            break;
        }
    }
    int ptr1 = nums[0];
    int ptr2 = tortoise;
    while(ptr1 != ptr2){
        ptr1 = nums[ptr1];
        ptr2 = nums[ptr2];
    }
    return ptr1;
}

int main(){
    std::vector<int> nums = {2,5,9,6,9,3,8,9,7,1};
    std::cout << findDuplicate(nums) << std::endl;
}
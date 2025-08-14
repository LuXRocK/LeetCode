#include <iostream>
#include <vector>
#include <bits/stdc++.h>

int missingNumber(std::vector<int>& nums){
    int result = 0;

    std::sort(nums.begin(), nums.end());

    for(int i = 0; i <= nums.size(); i++){
        if(!std::binary_search(nums.begin(), nums.end(), i)){
            result = i;
        }
    }
    return result;
}


int main(){
    std::vector<int> nums {3,0,1};

    std::cout << missingNumber(nums) << std::endl;
    return 0; 
}
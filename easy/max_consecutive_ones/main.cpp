#include <iostream>
#include <vector>

int findMaxCosecutiveOnes(std::vector<int>& nums){
    int result = 0;
    int temp = 0;

    for(auto& i : nums){
        if(i){
            temp ++;
        }else{
            temp = 0;
        }
        if(temp > result){
            result = temp;
        }
    }
    return result;
}

int main(){

    std::vector<int> nums {1,0,1,1,0,1};

    std::cout << findMaxCosecutiveOnes(nums) << std::endl;
    return 0;
}
#include <iostream>
#include <vector>
#include <bits/stdc++.h>


int pivotInteger(int n){
    std::vector<int> nums;

    for(int i = 0; i < nums.size(); i++){
        int left = 0;
        int right = 0;

        left = std::accumulate(nums.begin(), nums.begin()+i+1, left);
        right = std::accumulate(nums.begin()+i, nums.end(), right);

        if(left == right){
            return nums[i];
        }
        
        left = 0;
        right = 0;
    }
    return -1;
}

int main(){
    std::cout << pivotInteger(8) << std::endl;

    std::cout << "Hello World!" << std::endl;
    return 0;
}
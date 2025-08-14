#include <iostream>
#include <vector>
#include <bits/stdc++.h>

int pivotInteger(int n){
    std::vector<int> nums;
    
    for(int i = n; i > 0; i--){
        nums.push_back(i);
    }

    for(int i = 0; i < nums.size(); i++){
        int left = 0;
        int right = 0;

        for(int j = 0; j <= i; j++){
            left += nums[j];
        }

        for(int k = i; k < nums.size(); k++){
            right += nums[k];
        }

        if(left == right){
            return nums[i];
        }

        left = 0;
        right = 0;
    }
    return -1;
}

int main(){
    pivotInteger(8);
    return 0;
}
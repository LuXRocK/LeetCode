#include <iostream>
#include <vector>
#include <bits/stdc++.h>

int getCommon(std::vector<int>& nums1, std::vector<int>& nums2){
    for(int i = 0; i < nums1.size(); i++){
        if(std::binary_search(nums2.begin(), nums2.end(), nums1[i])){
            return nums1[i];
        }
    }
    return -1;
}

int main(){

    std::vector<int> nums1 = {1,2,3};
    std::vector<int> nums2 = {2,4};

    getCommon(nums1, nums2);
    std::cout << "Hello World!" << std::endl;
    return 0;
}
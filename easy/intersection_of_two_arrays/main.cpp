#include <iostream>
#include <vector>
#include <bits/stdc++.h>

std::vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2){
    std::vector<int> result;
    std::sort(nums1.begin(), nums1.end());
    std::sort(nums2.begin(), nums2.end());
    if(nums1.size() < nums2.size()){
        for(const auto& i : nums1){
            if(std::binary_search(nums2.begin(), nums2.end(), i) && !(std::binary_search(result.begin(), result.end(), i))) result.push_back(i);
        }   
    }else{
        for(const auto& i : nums2){
            if(std::binary_search(nums1.begin(), nums1.end(), i) && !(std::binary_search(result.begin(), result.end(), i))) result.push_back(i);
        }
    }
    result.resize(std::distance(result.begin(), std::unique(result.begin(), result.end())));
    return result;
}

int main(){
    std::vector<int> nums1 = {4,9,5};
    std::vector<int> nums2 = {9,4,9,8,4};

    intersection(nums1, nums2);
    std::cout << "Hello World!" << std::endl;
    return 0;
}
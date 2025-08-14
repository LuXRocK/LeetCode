#include <iostream>
#include <vector>
#include <bits/stdc++.h>

std::vector<int> sortedSquares(std::vector<int>& nums){
    std::vector<int> result;

    for(const auto& i : nums){
        result.push_back(i*i);
    }
    
    std::sort(result.begin(), result.end());
    return result;
    
}

int main(){
    std::cout << "Hello World!" << std::endl;
    return 0; 
}
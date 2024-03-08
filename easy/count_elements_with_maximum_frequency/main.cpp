#include <iostream>
#include <vector>
#include <map>
#include <bits/stdc++.h>

int maxFrequencyElements(std::vector<int>& nums){
    
    int result = 0;

    std::sort(nums.begin(), nums.end()); //sort vector

    std::vector<int> uniqueNums = nums; //create vector for unique numbers 
    std::vector<int> freqVect; //vector for frequency of those numbers
    uniqueNums.resize(std::distance(uniqueNums.begin(), std::unique(uniqueNums.begin(), uniqueNums.end())));

    //count the frequency of each number
    for(const auto& i : uniqueNums){
        int freq = std::count(nums.begin(), nums.end(), i);
        freqVect.push_back(freq);
    }

    //sort and reverse the vector so we know that the most occuring number is in the front and based on that can check other numbers 
    std::sort(freqVect.begin(), freqVect.end());
    std::reverse(freqVect.begin(), freqVect.end());    

    //check the most occuring numbers and sum their occurences 
    for(int i = 0; i < freqVect.size(); i++){
        if(freqVect[i] == freqVect[0]) result += freqVect[i];
    }

    return result;
}

int main(){

    std::vector<int> nums = {1,2,3,4,5};

    maxFrequencyElements(nums);
    std::cout << "Hello World!" << std::endl;
    return 0;
}
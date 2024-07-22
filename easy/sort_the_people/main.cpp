#include <vector>
#include <iostream>
#include <map>
#include <bits/stdc++.h>

std::vector<std::string> sortPeople(std::vector<std::string>& names, std::vector<int>& heights){
    std::map<int, std::string> mp;
    std::vector<std::string> result;
    for(int i = 0; i < names.size(); i++){
        mp.insert({heights[i], names[i]});
    }
    for(const auto i : mp){
        result.push_back(i.second);
    }
    std::reverse(result.begin(), result.end());
    return result;
}

int main(){
    std::vector<std::string> names = {"Mary","John","Emma"};
    std::vector<int> heights = {180,165,170};
    sortPeople(names, heights);
    return 0;
}
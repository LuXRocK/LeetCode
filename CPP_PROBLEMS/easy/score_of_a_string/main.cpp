#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

int scoreOfString(std::string s){
    std::vector<int> asci;
    int result = 0;
    for(auto i : s){
        asci.push_back(int(i));
    }
    for(int i = 1; i < asci.size(); i++){
        result += std::abs(asci[i]-asci[i-1]);     
    }
    return result;
}

int main(){
    std::string s = "zaz";
    scoreOfString(s);
    return 0;
}
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

std::string addSpaces(std::string s, std::vector<int>& spaces){
    std::string output = "";
    int j = 0;
    int i = 0;
    for(i; i < spaces.size(); i++){
        while(j < spaces[i]){
            output += s[j];
            j++;
        }
        output += " ";
    }
    std::cout << i << std::endl;
    for(int j = spaces[i-1]; j < s.length(); j++){
        output += s[j];
    }
    return output;
}

int main(){
    std::vector<int> spaces = {1,5,7,9};
    std::cout << addSpaces("icodeinpython", spaces);
}
#include <iostream>
#include <string>
#include <cctype>

std::string makeGood(std::string s){
    std::string result = "";
    if(s.length() == 0) return result;
    for(int i = 0; i < s.length(); i++){
        for(int j = 1; j < s.length(); j++){
            if(s[j] != std::toupper(s[i])) result += s[i];
        }
    }
    return result;
}

int main(){
    std::cout << makeGood("leEeetcode") << std::endl;
    return 0;
}
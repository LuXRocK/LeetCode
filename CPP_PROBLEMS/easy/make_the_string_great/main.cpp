#include <iostream>
#include <string>
#include <cctype>

std::string makeGood(std::string s){
    std::string newS = "";
    int n = s.length();
    for(int i = 0; i < s.length(); i++){
        if(s[i + 1] == std::toupper(s[i])){
            for(int j = 0; j < s.length(); j++){
                if(j != i && j != i + 1) newS += s[j];
            }
            if(newS.length() == n) break;
            makeGood(newS);
        }
    }
    return newS;
}

int main(){
    std::cout << makeGood("abBAcC") << std::endl;
    return 0;
}
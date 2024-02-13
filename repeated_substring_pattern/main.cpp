#include <iostream>
#include <string>

bool repeatedSubstringPattern(std::string s){
    std::string ns;
    for(int i = 0; i < s.length(); i++){
        for (int j = 1; j <= s.length()-1; j++){
            ns = "";
            std::string subs = s.substr(i, j);
            while(ns.length() < s.length()){
                ns += subs;
                if(ns == s){
                    return true;
                }
            }
        }
    }
    return false;
    
}

int main(){

    std::string s = "abcabcabcabc";
    std::cout << repeatedSubstringPattern(s) << std::endl;
    
    return 0;
}
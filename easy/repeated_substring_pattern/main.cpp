#include <iostream>
#include <string>

bool repeatedSubstringPattern(std::string s){
    std::string ns;
    for(int i = 0; i < s.length(); i++){
        ns = "";
        std::string subs = s.substr(0, i);
        while(ns.length() < s.length() && subs.length() != 0){
            ns += subs;
            if(ns == s){
                return true;
            }
        } 
    }
    return false;
}

int main(){

    std::string s = "aba";
    std::cout << repeatedSubstringPattern(s) << std::endl;

    return 0;
}
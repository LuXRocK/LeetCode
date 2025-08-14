#include <iostream>
#include <string>
#include <bits/stdc++.h>

int minimumLength(std::string s){

    while(s[0] == s[s.length()-1] && s.length() > 1){
        char pref = s[0];
        char suff = s[s.length()-1];
        while(s[0] == pref || s[s.length()-1] == suff){
            if(s[0] == pref) s.erase(s.begin());
            if(s[s.length()-1] == suff) s.pop_back();
        }
    }
    std::cout  << s.length() << std::endl;
    return s.length();
    
}

int main(){
    std::string s = "cabaabac";
    std::cout << s.size() << std::endl;    
    minimumLength(s);
    // std::cout << minimumLength(s) << std::endl;
    return 0;
}

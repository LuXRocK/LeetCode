#include <iostream>
#include <string>
#include <vector> 
#include <bits/stdc++.h>
#include <sstream> 

std::string licenseKeyFormatting(std::string s, int k){
    int num = 0;
    std::string chars; 
    std::stringstream ss;
    for(auto& i : s){
        if(!(i == '-')){
            chars += i;
            num ++;
        }
    }
    ss << chars[0];
    if(!(num%k)){
        for(int i = 1; i < chars.length(); i++){
            if(!(i%k)){
                ss << '-';
            }
            ss << chars[i];
        }
    }else{
        ss << '-';
        for(int i = 1; i < chars.length(); i++){
            if(!(i%k)){
                ss << chars[i];
                ss << '-';
            }
            ss << chars[i];
        }
    }
    std::cout << ss.str() << std::endl;
    std::cout << chars << std::endl;
    return ss.str();
}

int main(){

    std::string s = "5F3Z-2e-9-w";
    int k = 3;
    licenseKeyFormatting(s, k);

    return 0;
}
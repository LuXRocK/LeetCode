#include <iostream>
#include <string>
#include <bits/stdc++.h>

std::string customSortString(std::string order, std::string s){
    std::string result = ""; //creating a empty string that will be the result 
    //going through the "order" string 
    for(int i = 0; i < order.length(); i++){
        while(s.find(order[i]) != std::string::npos){ //if a character from "order" is in "s" you append "result" with it and delete it from "s", it's in a loop because there might be more than one occurance of such character and we want all of them to remain in the right order 
            result += order[i];
            s.erase(s.begin() + s.find(order[i]));
        }
    }
    //going through the rest of "s" and adding the remaining characters to "result", we don't care much about the order of those remaining characters 
    for(int i = 0; i < s.length(); i++){
        result += s[i];
    }
    //return result as the customly sorted string 
    return result;
}

int main(){

    std::string order = "kqep", s = "pekeq";
    customSortString(order, s);
    std::cout << "Hello World!" << std::endl;
    return 0;
}
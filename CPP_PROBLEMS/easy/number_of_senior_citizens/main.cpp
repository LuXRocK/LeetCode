#include <iostream>
#include <vector>
#include <bits/stdc++.h>

int countSeniors(std::vector<std::string>& details){
    int result = 0;
    for(int i = 0; i < details.size(); i++){
        std::string age = "";
        age += details[i][11];
        age += details[i][12];
        int age_int = std::stoi(age);
        if(age_int > 60){result++;}
    }
    return result;
}

int main(){
    std::vector<std::string> details = {"7868190130M7522","5303914400F9211","9273338290F4010"};
    std::cout << countSeniors(details) << std::endl;
    return 0;
}
#include <iostream>
#include <map>
#include <string> 

int getLucky(std::string s, int k){
    std::map<char, int> alphabet;
    for(char letter = 'a'; letter <= 'z'; letter++){
        alphabet[letter] = letter - 'a' + 1;
    }

    std::string convert = "";
    for(auto i : s){
        convert += std::to_string(alphabet[i]);
    }
    for(int i = 0; i < k; i++){
        std::string number = convert;
        std::string new_number = "";
        int new_int = 0;
        for(auto i : number){
            new_int += i - '0';
        }
        new_number = std::to_string(new_int);
        convert = new_number;
    }
    return std::stoi(convert);
}

int main(){

    std::cout << getLucky("leetcode", 2) << std::endl;
    
    return 0;
}
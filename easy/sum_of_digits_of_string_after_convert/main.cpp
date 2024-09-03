#include <iostream>
#include <map>
#include <string> 

int getLucky(std::string s, int k){
    std::map<char, int> alphabet;
    int result = 0;
    for(char letter = 'a'; letter <= 'z'; letter++){
        alphabet[letter] = letter - 'a' + 1;
    }
    // for(const auto i : alphabet){
    //     std::cout << i.first << ": " << i.second << std::endl;
    // }
    std::string convert = "";
    for(auto i : s){
        convert += std::to_string(alphabet[i]);
    }
    // std::cout << convert << std::endl;
    int converted = std::stoi(convert);
    for(int i = 0; i < k; i++){
        int number = converted;
        int new_number = 0;
        while(converted)
    }
    return result;
}

int main(){
    std::cout << getLucky("iiii", 4) << std::endl;
    return 0;
}
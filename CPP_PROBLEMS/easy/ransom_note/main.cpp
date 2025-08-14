#include <iostream>
#include <string>

bool canConstruct(std::string ransomNote, std::string magazine){
    std::string test;
    for(int i = 0; i < ransomNote.length(); i++){
        for(int j = 0; j < magazine.length(); j++){
            if(ransomNote[i] == magazine[j]){
                test += magazine[j];
                magazine.erase(magazine.begin() + j);
                break;
            }
        }
    }
    if(test == ransomNote){
        return true;
    }else{
        return false;
    }
}

int main(){
    std::string a = "ccddaa";
    std::string b = "cccdaaa";
    std::cout << canConstruct(a, b) << std::endl;
}
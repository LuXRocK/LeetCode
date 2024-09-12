#include <set>
#include <vector>
#include <iostream>

int countConsistentStrings(std::string allowed, std::vector<std::string>& words){
    int result = 0;
    for(int i = 0; i < words.size(); i++){
        result ++;
        for(auto j : words[i]){
            if(allowed.find(j) == std::string::npos){
                result --;
                break;
            }
        }
    }
    return result;
}

int main(){
    std::string allowed = "ab";
    std::vector<std::string> words {"ad","bd","aaab","baa","badab"};
    countConsistentStrings(allowed, words);
}
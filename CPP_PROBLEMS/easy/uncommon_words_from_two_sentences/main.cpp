#include <iostream>
#include <vector>
#include <map>
#include <sstream>

std::vector<std::string> uncommonFromSentence(std::string s1, std::string s2){
    std::vector<std::string> result;
    std::string s3 = s1 + " " + s2;
    std::cout << s3 << std::endl;
    std::map<std::string, int> occurances;
    std::stringstream ss(s3);
    std::string word;
    while(ss >> word){
        occurances[word]++;
    }
    for(auto i : occurances){
        if(i.second == 1) result.push_back(i.first);
    }
    return result;
}

int main(){
    std::string s1 = "this apple is sweet";
    std::string s2 = "this apple is sour";
    uncommonFromSentence(s1, s2);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}


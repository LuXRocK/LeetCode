#include <iostream>
#include <vector>
#include <string>
#include <algorithm>




std::string longestCommonPrefix(std::vector<std::string>& strs){
    
   
 
    int n = strs.size();
    std::string pref = "";
    std::string tmp = "";

    if(strs.size() == 1){
        pref = strs[0];
    }

    if(strs.size() == 0){
        pref = "";
    }

    std::sort(strs.begin(), strs.end());

    int en = std::min(strs[0].size(), strs[n - 1].size());

    std::string first = strs[0], last = strs[n-1];
    int i = 0;
    while(i < en && first[i] == last[i]){
        i++;
        pref = first.substr(0, i);
    }
    std::cout << pref << std::endl;
    return pref;
}

int main(){

    std::vector<std::string> strs = {"abab","aba","abc"};

    longestCommonPrefix(strs);

}
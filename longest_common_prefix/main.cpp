#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


bool cmp(const std::string lhs, const std::string rhs) {
   return lhs.length() < rhs.length();
}

std::string longestCommonPrefix(std::vector<std::string>& strs){
    std::sort(strs.begin(), strs.end(), cmp);
   
    // for(auto& element : strs){
    //     std::cout << element << std::endl;
    // }

    std::string pref = "";
    std::string tmp = "";

    if(strs.size() == 1){
        pref = strs[0];
    }

  

    for(int i = 1; i < strs.size(); i++){
        
        if(strs[i].substr(0, strs[0].size()) == strs[0]){
            pref = strs[0];
        }else{
            for(auto letter : strs[0]){
                tmp += letter;
                if(strs[i].substr(0, tmp.size()) == tmp){
                    pref = tmp;
                }else{
                    break;
                }
            }
        }
    }
    // std::cout << pref << std::endl;
    return pref;
}

int main(){

    std::vector<std::string> strs = {"flower","flow","flight"};

    longestCommonPrefix(strs);

}
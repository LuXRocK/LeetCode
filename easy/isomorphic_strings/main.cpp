#include <iostream>
#include <vector>
#include <map>

bool isIsomorphic(std::string s, std::string t){
        std::vector<int> indexS(200, 0);
        std::vector<int> indexT(200, 0); 
        
        int len = s.length(); 
        
        if(len != t.length()) {
            return false;
        }
        
        for(int i = 0; i < len; i++) { 
            if(indexS[s[i]] != indexT[t[i]]) { 
                return false;
            }
            
            indexS[s[i]] = i + 1;
            indexT[t[i]] = i + 1;
        }
        
        return true;
}

int main(){
    std::cout << isIsomorphic("add", "egg") << std::endl;
    return 0;
}
#include <iostream>
#include <vector>
#include <bits/stdc++.h>

int findContentChildren(std::vector<int>& g, std::vector<int>& s){
    int result = 0;
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());

    for(int i = 0; i < g.size()-1; i++){
        for(int j = 0; j < s.size(); j++){
            if(s[j] >= g[i]){
                result ++;
                s.erase(s.begin() + j);
                break;
            }
        }
    }
    return result;

}

int main(){
    std::vector<int> g{1,2,3};
    std::vector<int> s{1,1};
   
    std::cout << findContentChildren(g, s) << std::endl;
    return 0;
}
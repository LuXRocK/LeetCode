#include <iostream>
#include <vector>
#include <map>
#include <bits/stdc++.h>

int findJudge(int n, std::vector<std::vector<int>>& trust){

    if(n == 1){
        return 1;
    }

    std::map<int, std::vector<int>> mp;
    int result = 0;

    for(int i = 1; i <= n; i++){
        mp[i] = {};
    }
    std::map<int, std::vector<int>>::iterator its = mp.begin();
    while(its != mp.end()){
        for(int i = 0; i < trust.size(); i++){
            if(trust[i][0] == its->first){
                its->second.push_back(trust[i][1]);
            }
        }
        std::sort(its->second.begin(), its->second.end());
        its++;
    }

    std::map<int, std::vector<int>>::iterator xd = mp.begin();
    while(xd != mp.end()){
        std::cout << xd->first << ":";
        for(const auto& i : xd->second){
            std::cout << i << " ";
        }
        std::cout<<std::endl;
        xd++;
    }

    std::map<int, std::vector<int>>::iterator it = mp.begin();
    while(it != mp.end()){
        if(it->second.size() == 0){
            std::map<int, std::vector<int>>::iterator it1 = mp.begin();
            while(it1 != mp.end()){
                if(it1 != it){
                    if(std::binary_search(it1->second.begin(), it1->second.end(), it->first)){
                        result = it->first;
                    }else{
                        result = 0;
                        break;
                    }
                }
                it1++;
            }
        }
        it++;
    }
    if(result == 0){
        result = -1;
    }
    std::cout << result << std::endl;
    return result;
    
}

int main(){
 
    int n = 4;
    std::vector<std::vector<int>> trust {{1,2},{1,3},{2,1},{2,3},{1,4},{4,3},{4,1}};



    findJudge(n, trust);
    return 0;
}
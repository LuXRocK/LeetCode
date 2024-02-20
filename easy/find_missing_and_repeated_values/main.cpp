#include <iostream>
#include <vector>
#include <bits/stdc++.h>


std::vector<int> findMissingAndRepeatedValues(std::vector<std::vector<int>>& grid){

    std::vector<int> ans;

    int a;
    int b;
    int n = grid.size();

    std::vector<int> nums;
    std::vector<int> added;

    for(int i = 1; i <= n*n; i++){
        nums.push_back(i);
    }

    for(int i = 0; i < grid.size(); i++){
        for(int j = 0; j < grid[i].size(); j++){
            added.push_back(grid[i][j]);
            if(binary_search(nums.begin(), nums.end(), grid[i][j])){
                auto it =  find(nums.begin(), nums.end(), grid[i][j]);
                if(it != nums.end()){
                    nums.erase(it);
                }
            }
        }
    }
    
    for(int i = 0; i < added.size(); i++){
        for(int j = i + 1; j < added.size(); j++){
            if(added[i] == added[j]){
                a = added[i];
            }
        }
    }

    b = nums[0];

    ans.push_back(a);
    ans.push_back(b);

    return ans;

}


int main(){
std::vector<std::vector<int>> matrix 
{
    {1,2},
    {4,2}
};

findMissingAndRepeatedValues(matrix);

return 0;
}
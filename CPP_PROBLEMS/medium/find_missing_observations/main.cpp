#include <iostream>
#include <vector> 
#include <bits/stdc++.h>

std::vector<int> missingRolls(std::vector<int>& rolls, int mean, int n){
    std::vector<int> result;
    int x = std::accumulate(rolls.begin(), rolls.end(), 0);
    int y = mean * (rolls.size() + n) - x;
    if(y > 6 * n || y < n){
        return result;
    }
    int distributeMean = y / n;
    int mod = y % n;
    for(int i = 0; i < n; i++){
        result.push_back(distributeMean);
        if(i < mod){
            result[i]++;
        }
    }
    return result;
}

int main(){
    std::cout << "Hello, World!" << std::endl;
    std::vector<int> rolls {1, 5, 6};
    int mean = 3; 
    int n = 4;
    missingRolls(rolls, mean, n);
    return 0;
}


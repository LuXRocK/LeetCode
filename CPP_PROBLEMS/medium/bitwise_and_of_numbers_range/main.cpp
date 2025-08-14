#include <iostream>
#include <stdio.h>
#include <vector>
#include <bits/stdc++.h>
#include <cmath>

int rangeBitwiseAnd(int left, int right){
    int result = 0;
    std::vector<int> leftBin;
    std::vector<int> rightBin;
    std::vector<int> bitwiseAnd;

    for(int i = 31; i >= 0; i--){
        if(left%2){
            leftBin.push_back(1);
        }else{
            leftBin.push_back(0);
        }
        if(right%2){
            rightBin.push_back(1);
        }else{
            rightBin.push_back(0);
        }
        right /= 2;
        left /= 2;  
    }
    for(const auto& i : leftBin){
        std::cout << i;
    }
    std::cout << std::endl;
    for(const auto& i : rightBin){
        std::cout << i;
    }
    std::cout << std::endl;
    for(int i = 31; i >= 0; i--){
        if(leftBin[i] == rightBin[i]){
            if(leftBin[i] == 1){
                bitwiseAnd.push_back(1);
            }else{
                bitwiseAnd.push_back(0);
            }
        }else{
            break;
        }
    }
    for(int i = bitwiseAnd.size(); i < 32; i++){
        bitwiseAnd.push_back(0);
    }
    for(const auto& i : bitwiseAnd){
        std::cout << i;
    }
    std::cout << std::endl;
    std::reverse(bitwiseAnd.begin(), bitwiseAnd.end());
    for(int i = 0; i < bitwiseAnd.size(); i++){
        if(bitwiseAnd[i] == 1){
            result += pow(2, i);
        }
    }
    return result;
}


int main(){
    int right = 2147483647;
    std::cout << rangeBitwiseAnd(1,1) << std::endl;
    return 0;
}
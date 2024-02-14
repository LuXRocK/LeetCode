#include <iostream>
#include <vector>
#include <bits/stdc++.h>

int hammingDistance(int x, int y){
    
    int result = 0;
    std::vector<int> xBin;
    std::vector<int> yBin;

    while(x > 0){
        if(x%2 == 0){
            xBin.push_back(0);
        }else{
            xBin.push_back(1);
        }
        x /= 2;
    }
    while(y > 0){
        if(y%2 == 0){
            yBin.push_back(0);
        }else{
            yBin.push_back(1);
        }
        y /= 2;
    }

    if(xBin.size() < yBin.size()){
        while(xBin.size() != yBin.size()){
            xBin.push_back(0);
        }
    }else if(yBin.size() < xBin.size()){
        while(yBin.size() != xBin.size()){
            yBin.push_back(0);
        }
    }

    std::reverse(xBin.begin(), xBin.end());
    std::reverse(yBin.begin(), yBin.end());

    for(int i = 0; i < xBin.size(); i++){
        if(xBin[i] != yBin[i]){
            result++;
        }
    }

    return result;
}

int main(){

    std::cout << hammingDistance(3, 1) << std::endl;
    return 0;
}
#include <iostream>
#include <vector>
#include <cmath>

std::vector<int> constructRectangle(int area){
    std::vector<int> result;

    for(int i = sqrt(area); i > 0; i--){
        for(int j = sqrt(area); j <= area; j++){
            if(i*j == area){
                result.push_back(j);
                result.push_back(i);
                break;
            }else if(i*j > area){
                break;
            }
        }
        if(result.size() != 0){
            break;
        }
    }
    return result;
}

int main(){

    constructRectangle(10000000);
    return 0;
}
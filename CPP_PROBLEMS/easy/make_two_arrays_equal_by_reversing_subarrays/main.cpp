#include <iostream>
#include <vector>
#include <bits/stdc++.h>

bool canBeEqual(std::vector<int>& target, std::vector<int>& arr){
    bool result = true;
    std::sort(target.begin(), target.end());
    std::sort(arr.begin(), arr.end());
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] != target[i]){
            result = false;
            break;
        }
    }
    return result;
}

int main(){
    std::vector<int> target = {392, 360};
    std::vector<int> arr = {392, 360};
    std::cout << canBeEqual(target, arr) << std::endl;
}

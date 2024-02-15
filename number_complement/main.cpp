#include <iostream>
#include <vector>
#include <bits/stdc++.h>

int findComplement(int num){
    std::vector<int> binNum;
    while(num > 0){
        if(num%2 == 1){
            binNum.push_back(1);
        }else{
            binNum.push_back(0);
        }
        num /= 2;
    }
    for(auto i : binNum){
        if(i == 1){
            i = 0;
        }else{
            i = 1;
        }
    }

}



int main(){

    findComplement(5);
    return 0;
}
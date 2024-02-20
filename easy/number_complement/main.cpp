#include <iostream>
#include <vector>
#include <bits/stdc++.h>

int findComplement(int num){
    int result = 0;
    std::vector<int> binNum;
    while(num > 0){
        if(num%2 == 1){
            binNum.push_back(1);
        }else{
            binNum.push_back(0);
        }
        num /= 2;
    }
    int exp = 0;
    for(auto i : binNum){
        if(i == 1){
            i = 0;
            result += i*pow(2, exp);
        }else{
            i = 1;
            result += i*pow(2, exp);
        }
        exp++;
    }
    return result;
}



int main(){

    findComplement(1);
    return 0;
}
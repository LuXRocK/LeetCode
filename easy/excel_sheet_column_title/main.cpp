#include <iostream>
#include <bits/stdc++.h>

std::string convertToTitle(int n){
    std::string res;
    while(n){
        res += (--n)%26 + 'A';
        n = n/26;
    }
    std::reverse(res.begin(), res.end());
    return res;
}

int main(){
    // int n = 27;
    // int k = n/26;
    // int m = n%26;
    // std::cout << m << std::endl;
    // std::cout << k << std::endl;
    std::cout << convertToTitle(701) << std::endl;
}
#include <iostream>
#include <string>

std::string maximumOddBinaryNumber(std::string s){
    int ones = 0;
    int zeros = 0;

    std::string result;

    for(int i = 0; i < s.length(); i++){
        if(s[i] == '1'){
            ones++;
        }else{
            zeros++;
        }
    }
    for(int i = 0; i < s.length(); i++){
        if(ones > 1){
            result += '1';
            ones--;
        }else if(zeros != 0){
            result += '0';
            zeros--;
        }else{
            result += '1';
            ones--;
        }
    }
    
    std::cout << result << std::endl;
    std::cout << "Ones: " << ones << " " << "Zeros: " << zeros << std::endl;
    return result;
}

int main(){
    maximumOddBinaryNumber("0101");
    // std::cout << "Hello World!" << std::endl;
    return 0;
}
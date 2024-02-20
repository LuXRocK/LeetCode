#include <iostream>

int addDigits(int num){
    int newNum = 0;
    while(num != 0){
        newNum += num%10;
        num /= 10;
    }
    if(newNum / 10){
        return addDigits(newNum);
    }
    return newNum;
   
    
}

int main(){

 
    std::cout << addDigits(38) << std::endl;

    return 0;
}
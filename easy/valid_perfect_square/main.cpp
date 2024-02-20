#include <iostream>

bool isPerfectSquare(int num){
    for(long i = 1; i * i <= num; i++){
        if(i * i == num){
            return true;
        }
    }
    return false;
}

int main(){
    std::cout << isPerfectSquare(16) << std::endl;
}
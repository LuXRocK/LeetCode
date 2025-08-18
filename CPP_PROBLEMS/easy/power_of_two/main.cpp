#include <iostream>
#include <cmath>

bool isPowerOfTwo(int n){
    if(n > 0){
        while(!(n % 2)){
            n /= 2;
        }
    }
    if(n == 1){
        return 1;
    }else{
        return 0;
    }
}

int main(){

    std::cout << isPowerOfTwo(3) << std::endl;
    return 0;
}

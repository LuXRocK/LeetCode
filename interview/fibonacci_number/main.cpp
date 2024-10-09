#include <iostream>

int fib(int n){
    int result = 0;
    if(n > 1){
        result = fib(n-1)+fib(n-2);
    }else if(n == 1){
        result = 1;
    }else if(n == 0){
        result = 0;
    }
    return result;
}

int main(){
    std::cout << "Hello, World!" << std::endl;
    std::cout << fib(3) << std::endl;
    return 0;
}
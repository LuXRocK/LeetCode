#include <iostream>
#include <string>

bool isPalindrome(int x){
    int temp = x;
    long y = 0;
    if(x<0){
        std::cout << "False" << std::endl;
        return false;
    }else{
        while(temp != 0){
            y += temp % 10;
            y = y*10;
            temp = temp / 10;
        }
        y = y / 10;
        if(y == x){
            std::cout << "True" << std::endl;
            return true;
        }else{
            std::cout << "False" << std::endl;
            return false;
        }
    }


}

int main(){
    isPalindrome(10);
}
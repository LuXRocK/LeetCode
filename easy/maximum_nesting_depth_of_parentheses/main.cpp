#include <iostream>

int maxDepth(std::string s){
    int counter = 0, maxCounter = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '(') counter++;
        if(s[i] == ')') counter--;
        if(counter > maxCounter) maxCounter = counter;
    }
    return maxCounter;
}

int main(){
    std::string s = "(1)+((2))+(((3)))";
    std::cout << maxDepth(s) << std::endl;
}
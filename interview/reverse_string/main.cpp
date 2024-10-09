#include <iostream>
#include <vector>

void reverseString(std::vector<char>& s){
    int i = 0;
    int j = s.size()-1;
    while(i < j){
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
}

int main(){
    std::cout << "Hello, World!" << std::endl;
    std::vector<char> s {'h','e','l','l','o'};
    reverseString(s);
    return 0;
}
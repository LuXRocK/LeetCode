#include  <vector>
#include <iostream>

void reverseString(std::vector<char>& s){
    int i = 0;
    int j = s.size()-1;
    char temp;
    while(i < j){
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
}

int main(){
    std::vector<char> s {'h', 'e', 'l', 'l', 'o'};
    reverseString(s);
    return 0;
}
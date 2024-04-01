#include <iostream>
#include <bits/stdc++.h>

int lengthOfLastWord(std::string s){
    int result = 0;
    int i = s.length()-1;
    while(s[i] == ' '){
        i--;
    }
    for(int j = i; j >= 0; j--){
        if(s[j] != ' ') result++;
        else break;
    }
    return result;
}

int main(){
    std::cout << lengthOfLastWord("   fly me   to   the moon  ") << std::endl;
    return 0;
}
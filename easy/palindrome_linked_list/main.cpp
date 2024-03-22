#include <iostream>
#include <vector>

struct ListNode{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void displayList(ListNode* head){
    while(head){
        if(head->next) std::cout << head->val << " -> ";
        else std::cout << head->val;
        head = head->next;
    }
    std::cout << std::endl;
}

bool isPalindrome(ListNode* head){
    std::vector<int> values;
    while(head){
        values.push_back(head->val);
        head = head->next;
    }
    int i = 0;
    int j = values.size()-1;
    while(i < j){
        if(values[i] != values[j]) return false;
        i++;
        j--;
    }
    return true;
}

int main(){
    std::cout << "Hello World!" << std::endl;

    ListNode* node4 = new ListNode(1);
    ListNode* node3 = new ListNode(2, node4);
    ListNode* node2 =  new ListNode(2, node3);
    ListNode* head = new ListNode(1, node2);
    std::cout << isPalindrome(head) << std::endl;
    displayList(head);
    return 0;
}
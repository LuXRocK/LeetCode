#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

bool hasCycle(ListNode *head){
    ListNode *fast = head;
    while(fast && fast->next){
        head = head->next;
        fast = fast->next->next;
        if(head == fast) return 1;
    }
    return 0;
}

int main(){

    ListNode *head = new ListNode(3);
    ListNode *first = new ListNode(2);
    ListNode *second = new ListNode(0);
    ListNode *third = new ListNode(-4);

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = first;

    std::cout << hasCycle(head) << std::endl;
    std::cout << "Hello World!" << std::endl;
    return 0;
}
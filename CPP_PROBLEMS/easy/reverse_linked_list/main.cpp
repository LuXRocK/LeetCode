#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void displayList(ListNode* head){
    while(head != NULL){
        std::cout << head->val;
        if(head->next != NULL) std::cout << " -> ";
        head = head->next;
    }
    std::cout << std::endl;
}

ListNode* reverseList(ListNode* head){
    ListNode *cur = head;
    ListNode *next = NULL;
    ListNode *prev = NULL;

    while(cur != NULL){
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    head = prev;
    return head;
}

int main(){
    ListNode* head = new ListNode(1);
    ListNode* node1 = new ListNode(4);
    ListNode* node2 = new ListNode(5);
    ListNode* node3 = new ListNode(10);

    head->next = node1;
    node1->next = node2;
    node2->next = node3;

    displayList(head);
    ListNode* head1 = reverseList(head);
    displayList(head1);
    return 0;
}
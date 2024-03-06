#include <iostream>

struct ListNode {
    int val; 
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* removeFromEnd(ListNode* head, int n){
    ListNode *tester = head;
    ListNode *first = head;

    int k = 0;
    while(head){
        head = head->next;
        k++;
    }
    head = first;
    if(k == n){
        head = head->next;
        return head;
    } 
    if(!first->next && n != 0){
        first = NULL;
    }
    
    while(head){
        int i = 0;
        while(tester->next && i < n){
            tester = tester->next;
            i++;
        }
        if(!tester->next && head->next){
            head->next = head->next->next;
            break;
        }else{
            tester = head;
        }
        tester = tester->next;
        head = head->next;
    }
    head = first;
    return head;
}

void printList(ListNode* head){
    while(head != NULL){
        if(head->next){
            std::cout << head->val << " -> ";
        }else{
            std::cout << head->val;
        }
        head = head->next;
    }
    std::cout << std::endl;
}

int main(){

    // ListNode *node5 = new ListNode(5);
    // ListNode *node4 = new ListNode(4, node5);
    // ListNode *node3 = new ListNode(3, node4);
    ListNode *node2 = new ListNode(2);
    ListNode *head = new ListNode(1, node2);
    

    printList(head);

    ListNode *head1 = removeFromEnd(head, 2);

    printList(head1);
    std::cout << "Hello World!" << std::endl;
    return 0; 
}
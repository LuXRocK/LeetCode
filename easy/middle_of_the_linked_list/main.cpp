#include <iostream>

struct ListNode {
    int val; 
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void printList(ListNode* head){
    while(head){
        if(head->next){
            std::cout << head->val << " -> ";
        }else{
            std::cout << head->val;
        }
        head=head->next;
    }
    std::cout << std::endl;
}

ListNode* middleNode(ListNode* head){
    ListNode *tester = head; //initializing a tester node to help me find the number of nodes in the list, also it will later help me store the middle node
    int i = 0;
    //loop for finding the amount of nodes
    while(tester){
        i++; 
        tester = tester->next;
    }

    i = i/2; //dividing number of nodes in two

    int k = 0;    // creating a helper variable to keep track of current node
    //going through the list again and checking if we're on the middle node 
    while(head){
        if(k == i){
            tester = head; //if k = i it means we found the middle node and we;re storing it in prevously created tester node
            break;
        }
        head = head->next;
        k++;
    }

    head = tester; //rewrite the tester node to head and return head

    return head;
    delete tester;
}

int main(){

    ListNode *node6 = new ListNode(6);
    ListNode *node5 = new ListNode(5, node6);
    ListNode *node4 = new ListNode(4, node5);
    ListNode *node3 = new ListNode(3, node4);
    ListNode *node2 = new ListNode(2, node3);
    ListNode *head = new ListNode(1, node2);


    ListNode *head1 = middleNode(head);
    printList(head1);

    std::cout << "Hello World!" << std::endl;


    delete node6, node5, node4, node3, node2, head, head1;
    return 0;
}
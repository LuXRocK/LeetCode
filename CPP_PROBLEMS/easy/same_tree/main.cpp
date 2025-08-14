#include <iostream>
#include <vector>
#include <queue>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}

};

void printTree(TreeNode* root){
    if(root == nullptr) return;

    std::queue<TreeNode*> q;
    q.push(root);

    while(!q.empty()){
        int levelSize = q.size();
        for(int i = 0; i < levelSize; i++){
            TreeNode* node = q.front();
            q.pop();
            std::cout << node->val << " ";
            if(node->left != nullptr) q.push(node->left);
            if(node->right != nullptr) q.push(node->right);
        }
        std::cout << std::endl;
    }    
}

bool isSameTree(TreeNode* p, TreeNode* q){
    if(p == NULL && q == NULL) return true;
    if(p == NULL || q == NULL) return false;
    return(p->val == q->val) &&
    isSameTree(p->left, q->left) &&
    isSameTree(p->right, q->right);
}

int main(){

    

    TreeNode* p = new TreeNode(1);
    p->left = new TreeNode(2);
    p->right = new TreeNode();

    TreeNode* q = new TreeNode(1);
    q->left = new TreeNode();
    q->right = new TreeNode(2);
    // printTree(root);

    std::cout << isSameTree << std::endl;
    return 0;
}
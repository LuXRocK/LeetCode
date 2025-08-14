#include <iostream>
#include <queue>
#include <vector>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr),right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(0), left(left), right(right) {}
};
//function to display tree
void printTree(TreeNode* root){
    if(root == NULL) return;

    std::queue<TreeNode*> q;
    q.push(root);

    while(!q.empty()){
        int levelSize = q.size();
        for(int i = 0; i < levelSize; i++){
            TreeNode *node = q.front();
            q.pop();
            std::cout << node->val << " ";
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
        }
        std::cout << std::endl;
    }
}

bool findTarget(TreeNode* root, int k){
    if(!root) return false; //breaking if root is empty

    std::vector<int> nodes; //initializing vector with nodes values
    std::queue<TreeNode*> q; //initializing queue to go through the tree
    q.push(root);
    
    //loop that goes through the tree
    while(!q.empty()){
        int levelSize = q.size(); //size of the level of the tree is how many nodes are in the queue 
        for(int i = 0; i < levelSize; i++){ //going through those nodes
            TreeNode *node = q.front(); //setting the current node as the one we're examining and popping it from the queue
            q.pop();
            nodes.push_back(node->val); //pushing the node's value into the vector 
            if(node->left) q.push(node->left); //pushing the children of this node into the queue 
            if(node->right) q.push(node->right);
        }
    }
    //nested loop to chceck for two sum like regular 
    for(int i = 0; i < nodes.size(); i++){
        for(int j = 0; j < nodes.size(); j++){
            if(j != i){
                if(nodes[i] + nodes[j] == k) return true;
            }
        }
    }
    return false;
}

int main(){

    TreeNode *leaf1 = new TreeNode(2);
    TreeNode *leaf2 = new TreeNode(4);
    TreeNode *leaf3 = new TreeNode(7);
    TreeNode *node1 = new TreeNode(3);
    TreeNode *node2 = new TreeNode(6);
    TreeNode *root = new TreeNode(5);

    root->left = node1;
    root->right = node2;
    node1->left = leaf1;
    node1->right = leaf2;
    node2->right = leaf3;

    printTree(root);
    std::cout << findTarget(root, 28) << std::endl;
    std::cout << "Hello World!" << std::endl;
    return 0;
}
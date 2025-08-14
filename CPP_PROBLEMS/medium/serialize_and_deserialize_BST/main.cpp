#include <iostream>
#include <queue>

struct TreeNode {
    int val;
    TreeNode* left ;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
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

std::string serialize(TreeNode* root){
    std::string data = "";
    std::queue<TreeNode*> q;

    q.push(root);
    while(!q.empty()){
        for(int i = 0; i < q.size(); i++){
            TreeNode* node = q.front();
            data += std::to_string(node->val); 
            q.pop();
            if(node->left){
                data += 'L';
                serialize(node->left);
            }
        }
    }
    std::cout << data << std::endl;
    return data;
}

TreeNode* deserialize(std::string data){
    if(!data.size()) return 0;
    TreeNode* root = new TreeNode(data[0]-'0');
    for(int i = 1; i < data.size(); i++){

    }
    return root;
}

int main(){
    TreeNode* root = new TreeNode(1);
    TreeNode* node1 = new TreeNode(2);
    TreeNode* node2 = new TreeNode(3);
    TreeNode* node3 = new TreeNode(4);
    TreeNode* node4 = new TreeNode(5);
    
    root->left = node1;
    root->right = node2;
    node2->left = node3;
    node3->right = node4;

    printTree(root);
    std::string data = serialize(root);

    TreeNode* newRoot = deserialize(data);
    printTree(newRoot);
    std::cout << "Hello World!" << std::endl;
    return 0;
}
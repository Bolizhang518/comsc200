#ifndef INTBINARYTREE_H
#define INTBINARYTREE_H

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class IntBinaryTree
{
private:
    struct TreeNode {
        int value;
        TreeNode *left;
        TreeNode *right;
    };
    
    TreeNode *root;
    // Private helpers - use recursion
    void insert(TreeNode *&, TreeNode *&);
    void remove(TreeNode *&, int);
    void makeDeletion(TreeNode *&);
    void destroySubTree(TreeNode *&);
    void displayInOrder(TreeNode *) const;
    void displayPreOrder(TreeNode *) const;
    void displayPostOrder(TreeNode *) const;
    
public:
    IntBinaryTree() { root = nullptr; }
    ~IntBinaryTree() { destroySubTree(root); }
    void insert(int);
    void remove(int value) { remove(root, value); }
    
    void displayInOrder() const { displayInOrder(root); }
    void displayPreOrder() const { displayPreOrder(root); }
    void displayPostOrder() const { displayPostOrder(root); }
    void draw(TreeNode* tree, std::string lpad, std::string rpad) const {
        std::string pad = lpad.substr(0, lpad.size() - 1);
        if (tree == nullptr)	return;
        draw(tree->right, rpad + "    |", rpad + "     ");
        std::cout << pad << "+--" << std::setw(3) << tree->value << std::endl;
        draw(tree->left, lpad + "     ", lpad + "    |");
    }
    
    void draw() const {
        std::cout << std::endl;
        this->draw(root, " ", " ");
        // std::cout << std::endl;
    }
};


////////////////////
// private Helpers
void IntBinaryTree::insert(TreeNode *&node, TreeNode *&newNode) {
    if(node == nullptr) node = newNode;
    else if(newNode->value < node->value ){
        insert(node->left,newNode);
    }
    else if (newNode->value > node->value ){
        insert(node->right,newNode);
    }
}
void IntBinaryTree::remove(TreeNode *&node, int n) {
    if(!node)
        cout  << " node " << n << "doesn't exist!\n";
    else if (n < node->value )
        remove ( node -> left, n);
    else if (node->value < n )
        remove (node -> right,n);
    else
        makeDeletion( node );
    
    
}
void IntBinaryTree::makeDeletion(TreeNode *&node) {
    TreeNode *tempNode;
    if(!node){
        
    }
    else if(!node->right) {
        tempNode = node;
        node = node -> left;
        delete tempNode;
    }
    else if( !node -> left){
        tempNode = node;
        node = node ->right;
        delete tempNode;
    }
    else{
        tempNode= node->right;
        TreeNode *leftmost = tempNode;
        while(leftmost->left){
            leftmost = leftmost -> left;
            if(!leftmost->left) break;
            tempNode = leftmost;
            
        }
        node ->value = leftmost->value;
        if(leftmost == tempNode)
            node->right = tempNode->right;
        else
            tempNode->left = leftmost ->right;
        delete leftmost;
    }
    
    
}
void IntBinaryTree::destroySubTree(TreeNode *&node) {
    if(node) {
        destroySubTree(node->left);
        destroySubTree(node->right);
        delete node;
    }
    
}
void IntBinaryTree::displayInOrder(TreeNode *node) const {
    if(node) {
        displayInOrder(node->left);
        cout << node->value << " " ;
        displayInOrder(node->right);
    }
}
void IntBinaryTree::displayPreOrder(TreeNode *node) const {
    if(node) {
        cout << node->value << " " ;
        displayPreOrder(node->left);
        displayPreOrder(node->right);
    }
}
void IntBinaryTree::displayPostOrder(TreeNode *node) const {
    if(node) {
        
        displayPostOrder(node->left);
        displayPostOrder(node->right);
        cout << node->value << " " ;
    }
}

////////////////////
// Public Method
void IntBinaryTree::insert(int value) {
    TreeNode *newNode = new TreeNode;
    newNode->value = value;
    newNode->right = newNode->left = nullptr;
    
    insert(root, newNode);
    
}

#endif

// Lab13 Integer Binary Search Tree (BST)
// This program builds an integer binary search tree of 5 nodes.
// First to use the enclosed draw() helper to show the BST upon each node insertion.
// Then display the BST content with inorder, preorder, and postorder traversal.
//
#include <iostream>
#include <iomanip>
#include "IntBinaryTree.h"
using namespace std;

int main()
{
    IntBinaryTree tree;
    
    // Insert some nodes.
    cout << "Inserting nodes:\n";
    tree.insert(8);
    tree.draw();
    tree.insert(4);
    tree.draw();
    tree.insert(12);
    tree.draw();
    tree.insert(2);
    tree.draw();
    tree.insert(6);
    tree.draw();
    tree.insert(1);
    tree.draw();
    tree.insert(3);
    tree.draw();
    tree.insert(5);
    tree.draw();
    tree.insert(7);;
    tree.draw();
    tree.insert(14);;
    tree.draw();
    tree.insert(10);;
 
    tree.draw();
    tree.insert(9);;
    tree.draw();
    tree.insert(11);;
    tree.draw();
    tree.insert(13);;
    tree.draw();
    tree.insert(15);;
    tree.draw();
    
    tree.remove(8);
       cout << "remove 8\n";
    tree.draw();
    tree.remove(12);
       cout << "remove 12\n";
    tree.draw();
    tree.remove(5);
       cout << "remove 5\n";
    tree.draw();
    
    
       cout << "Inorder traversal:\n";
       tree.displayInOrder();
    
       cout << "\nPreorder traversal:\n";
       tree.displayPreOrder();
    
       cout << "\nPostorder traversal:\n";
       tree.displayPostOrder();
    return 0;
}

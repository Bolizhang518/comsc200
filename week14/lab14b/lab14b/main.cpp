// Lab13 Integer Binary Search Tree (BST)
// This program builds an integer binary search tree of 5 nodes.
// First to use the enclosed draw() helper to show the BST upon each node insertion.
// Then display the BST content with inorder, preorder, and postorder traversal.
//
#include <iostream>
#include <iomanip>
#include "STRBinaryTree.h"
#include <boost/tokenizer.hpp>
#include <string>
#include <sstream>
#include <vector>
#include <string.h>
#include <stdio.h>

using namespace std;
void menu(){
    cout << " --- Integer Binary Tree Menu -----" << endl;
    cout << "B -  to batch enter FeetInches " << endl;
    cout << "C - to clear BST " << endl;
    cout << "D - to display BST" << endl;
    cout << "I - to Insert " << endl;
    cout << "R - to Remove " << endl;
    cout << "1 - to pre-order Traversal " << endl;
    cout << "2 - to In-order Traversal " << endl;
    cout << "3 - to Post - Order Traversal" << endl;
    cout << "Q - to quite the program" << endl;
    
}
int main()
{
    menu();
    STRBinaryTree tree;
    char command;
    bool stay = true;
    while (stay){
        cout << " Enter your command: "<<endl;
        cin >> command;
        cin.ignore();
        
        
        stringstream ss;
        string tokens;
        string input, token;
        
        switch(command){
                
            case 'B':
            case 'b':{
                
                
                cout << "Enter a list of Integers separated by comma(,):  ";
                
                getline (cin, input);  			// user input -> string
                stringstream ss(input);			// string -> stream
                while ( getline(ss, token, ',') ) {	// stream -> string token
                    stringstream sst(token);	// string token -> stream token
                    int ff;
                    sst >> ff;			// stream token -> double token
                    //tree.draw();
                    tree.insert(ff);;
                }
                tree.draw();
                break;
            }
            case 'D':
            case 'd':{
                
                tree.draw();
                break;
            }
            case 'q':
            case 'Q':{
                
                stay = false;
                break;
            }
            case'i':
            case'I':{
                int num;
                cout << " Enter a number to insert: ";
                cin >> num;
                tree.insert(num);;
                break;
            }
            case'1':{
                cout << "\nPreorder traversal:\n";
                tree.displayPreOrder();
                cout << "\n";
                break;
            }
            case'2':{
                cout << "\nPreorder traversal:\n";
                tree.displayInOrder();
                cout << "\n";
                break;
            }
            case'3':{
                cout << "\nPostorder traversal:\n";
                tree.displayPostOrder();
                cout << "\n";
                break;
            }
            case'R':
            case'r':{
                int RemoveNum;
                cout << "\nEnter the number you want to remove:";
                cin >> RemoveNum;
                tree.remove(RemoveNum);
                break;
            }
            case'c':
            case'C':{
                tree.destroySubTree();
                break;
            }
                
        }
        
        
        
        
        
    }
    
    
}

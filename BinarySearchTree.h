#ifndef BINARY_SEARCH_TREE_H
#define BINARY_SEARCH_TREE_H

#include "Node.h"
#include <iostream>
using namespace std;

class BinarySearchTree {
private:
    Node* root; // Starting point of the tree

    // Recursive helper for inserting a new value
    Node* InsertHelper(Node* current, int value);

    // Recursive helper for searching the tree
    bool SearchHelper(Node* current, int value);

    // Traversal helpers
    void InOrderHelper(Node* current);    // Left, Root, Right
    void PreOrderHelper(Node* current);   // Root, Left, Right
    void PostOrderHelper(Node* current);  // Left, Right, Root

    // Finds the smallest node in a subtree
    Node* FindMin(Node* current);

    // Recursive helper for deleting a value
    Node* RemoveHelper(Node* current, int value);

    // Calculates the height of the tree
    int HeightHelper(Node* current);

    // Deletes all nodes to prevent memory leaks
    void DestroyTree(Node* current);

public:
    // Constructor starts with an empty tree
    BinarySearchTree();

    // Destructor cleans up all dynamically allocated nodes
    ~BinarySearchTree();

    // Public wrapper functions
    void Insert(int value);
    bool Search(int value);
    void Remove(int value);

    // Tree traversal methods
    void InOrder();
    void PreOrder();
    void PostOrder();

    // Utility methods
    int FindMin();
    int FindMax();
    int Height();
};

#endif

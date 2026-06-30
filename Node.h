#ifndef NODE_H
#define NODE_H

class Node {
public:
    int data;      // Value stored inside the node
    Node* left;    // Pointer to the left child
    Node* right;   // Pointer to the right child

    // Constructor initializes the node with a value
    // and sets both child pointers to nullptr
    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

#endif

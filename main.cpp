#include <iostream>
#include "BinarySearchTree.h"

using namespace std;

int main() {
    BinarySearchTree bst;

    // Insert values into the tree
    cout << "=== Inserting Values ===" << endl;

    bst.Insert(50);
    bst.Insert(30);
    bst.Insert(70);
    bst.Insert(20);
    bst.Insert(40);
    bst.Insert(60);
    bst.Insert(80);

    cout << endl;

    // Display traversals
    cout << "=== Tree Traversals ===" << endl;

    cout << "Inorder: ";
    bst.InOrder();

    cout << "Preorder: ";
    bst.PreOrder();

    cout << "Postorder: ";
    bst.PostOrder();

    cout << endl;

    // Search for values
    cout << "=== Searching ===" << endl;

    cout << "Search 60: ";
    cout << (bst.Search(60) ? "Found" : "Not Found") << endl;

    cout << "Search 100: ";
    cout << (bst.Search(100) ? "Found" : "Not Found") << endl;

    cout << endl;

    // Minimum and Maximum
    cout << "=== Tree Information ===" << endl;

    cout << "Minimum Value: " << bst.FindMin() << endl;
    cout << "Maximum Value: " << bst.FindMax() << endl;
    cout << "Tree Height : " << bst.Height() << endl;

    cout << endl;

    // Delete a node
    cout << "=== Deleting Node 30 ===" << endl;

    bst.Remove(30);

    cout << "Inorder after deletion: ";
    bst.InOrder();

    cout << endl;

    // Non-leaf count (if implemented)
    cout << "=== Additional Features ===" << endl;

    cout << "Non-leaf Nodes: " << bst.CountNonLeafNodes() << endl;

    cout << endl;

    // Iterator demonstration (if implemented)
    cout << "=== Iterator Traversal ===" << endl;

    for (auto value : bst) {
        cout << value << " ";
    }

    cout << endl;

    return 0;
}

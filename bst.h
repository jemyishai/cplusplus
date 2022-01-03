#include <iostream>
#include <vector>

class BST {
 public:
  int data;
  BST *left, *right;

  BST() {
    left = nullptr;

    right = nullptr;

    data = 0;
  };

  BST(int x) {
    left = nullptr;
    right = nullptr;
    data = x;
  };

  BST *insert(BST *root, int value) {
    if (!root) {
      return new BST(value);
    };
    if (value > root->data) {
      root->right = insert(root->right, value);
    } else {
      root->left = insert(root->left, value);
    };
    return root;
  }

  void insert(int y) {
    BST *temp = this;
    insert(temp, y);
  };

  void nth_node(BST *nodey, std::vector<int> &values) {
    if (nodey == nullptr) return;

    nth_node(nodey->left, values);
    values.push_back(nodey->data);
    nth_node(nodey->right, values);
  };

  int nth_node(int n) {
    std::vector<int> inOrder;
    BST *root = this;

    nth_node(root, inOrder);

    int output = inOrder[n - 1];
    return output;
  };
};
#include <vector>
#include <iostream>
class BST
{
public:
  int data;
  BST *left, *right;
  BST()
  {
    left = nullptr;
    right = nullptr;
    data = 0;
  };
  BST(int x)
  {
    left = nullptr;
    right = nullptr;
    data = x;
  };

  // void insert(int y)
  // {
  //   BST *newNode = new BST(y);
  //   if (data < y)
  //   {
  //     //while right isn't nullptr
  //     right = newNode;
  //   }
  //   else
  //   {
  //     //while left isn't nullptr
  //     left = newNode;
  //   };
  // };

  void insert(int y)
  {
    BST *temp = this;
    BST *prev = this;
    BST *newNode = new BST(y);
    while (temp != nullptr){
      if(y < temp->data){
        temp = temp->left;
      } else{
        temp = temp->right;
      }
      if (y< prev->data){
        prev->left = newNode;
      } else{
        prev->right = newNode;
      }
    }
  };

void nth_node(BST* nodey, std::vector<int> &values)
  {
    if (nodey == nullptr) return;

    nth_node( nodey->left, values);
    values.push_back(nodey->data);
    nth_node( nodey->right, values);
  };

int nth_node(int n){
  std::vector<int> inOrder;
  BST *root = this;

  nth_node(root, inOrder);

  int output = inOrder[n+1];
  // std::cout << output << std::endl;
  return output;
};


};

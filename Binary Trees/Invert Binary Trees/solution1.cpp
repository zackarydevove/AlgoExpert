#include <vector>
using namespace std;

class BinaryTree {
public:
  int value;
  BinaryTree *left;
  BinaryTree *right;

  BinaryTree(int value);
  void insert(vector<int> values, int i = 0);
  void invertedInsert(vector<int> values, int i = 0);
};

// O(n) time | O(n) space
void invertBinaryTree(BinaryTree *tree) {
  if (!tree)
    return ;
  
  BinaryTree *tmp = tree->left;
  tree->left = tree->right;
  tree->right = tmp;

  invertBinaryTree(tree->left);
  invertBinaryTree(tree->right);
}

using namespace std;
#include <algorithm>

// This is an input class. Do not edit.
class BinaryTree {
public:
  int value;
  BinaryTree *left;
  BinaryTree *right;

  BinaryTree(int value) {
    this->value = value;
    left = nullptr;
    right = nullptr;
  }
};

// O(n) time || O(h) space
int recursive(BinaryTree *tree, int &diameter)
{
  if (!tree)
    return 0;

  int leftCount = 0;
  int rightCount = 0;

  if (tree->left)
    leftCount = recursive(tree->left, diameter) + 1;
  if (tree->right)
    rightCount = recursive(tree->right, diameter) + 1;

  if ((leftCount + rightCount) > diameter)
    diameter = leftCount + rightCount;
  
  return max(leftCount, rightCount);
}

int binaryTreeDiameter(BinaryTree *tree) {
  int diameter = 0;
  recursive(tree, diameter);
  return (diameter);
}

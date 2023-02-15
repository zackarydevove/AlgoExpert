using namespace std;

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

// O(n) time | O(n) space
int nodeDepths(BinaryTree *root, int depth = 0) {
  if (!root)
      return (0);
  return (depth + nodeDepths(root->left, depth + 1) + nodeDepths(root->right, depth + 1));
}

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
void recursif(BinaryTree *node, int depth, int &res){
  if (!node)
    return ;

  depth++;
  res += depth;

  recursif(node->left, depth, res);
  recursif(node->right, depth, res);
}


int nodeDepths(BinaryTree *root) {
  int res = 0;
  recursif(root, -1, res);
  return res;
}

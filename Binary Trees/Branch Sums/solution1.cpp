using namespace std;

// This is the class of the input root. Do not edit it.
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

void recursif(BinaryTree *root, int currSum, vector<int> &tab);

/* Time O(n) | Space O(n) */
vector<int> branchSums(BinaryTree *root) {
  vector<int> tab;
  recursif(root, 0, tab);
  return tab;
}

void recursif(BinaryTree *root, int currSum, vector<int> &tab)
{
  if (!root)
    return;

  currSum += root->value;

  if (!root->left && !root->right)
  {
    tab.push_back(currSum);
    return;
  }

  recursif(root->left, currSum, tab);
  recursif(root->right, currSum, tab);
}

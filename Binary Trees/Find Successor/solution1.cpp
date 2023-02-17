using namespace std;

// This is an input class. Do not edit.
class BinaryTree {
public:
  int value;
  BinaryTree *left = nullptr;
  BinaryTree *right = nullptr;
  BinaryTree *parent = nullptr;

  BinaryTree(int value) { this->value = value; }
};

// O(n) time | O(n) space
void recursive(BinaryTree *tree, vector<BinaryTree *> &tab)
{
  if (!tree)
    return ;

  recursive(tree->left, tab);
  tab.push_back(tree);
  recursive(tree->right, tab);
}

BinaryTree *findSuccessor(BinaryTree *tree, BinaryTree *node) 
{
  vector<BinaryTree *> tab;
  recursive(tree, tab);
  
  for (int i = 0; i < tab.size(); i++)
  {
    if (i == tab.size() - 1)
      return (0);
    if (tab[i] == node)
      return (tab[i + 1]);
  }
  return (0);
}



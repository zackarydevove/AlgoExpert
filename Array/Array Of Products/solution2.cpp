#include <vector>

using namespace std;

// O(n) time || O(n) space
vector<int> arrayOfProducts(vector<int> array) {
  vector<int> tab(array.size(), 1);
  vector<int> left(array.size(), 1);
  vector<int> right(array.size(), 1);

  int res_left = 1;
  for (int i = 0; i < array.size(); i++)
  {
    left[i] = res_left;
    res_left *= array[i];
  }

  int res_right = 1;
  for (int i = array.size() - 1; i >= 0; i--)
  {
    right[i] = res_right;
    res_right *= array[i];
  }

  for (int i = 0; i < array.size(); i++)
    tab[i] = left[i] * right[i];

  return tab;
}

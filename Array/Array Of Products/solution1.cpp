#include <vector>

using namespace std;

// O(n^2) time || O(n) space
vector<int> arrayOfProducts(vector<int> array) {
  vector<int> tab;
  for (int i = 0; i < array.size(); i++)
  {
    tab.push_back(1);
    for (int j = 0; j < array.size(); j++)
      if (j != i)
        tab[i] *= array[j];
  }
  return tab;
}

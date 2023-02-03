#include <vector>

using namespace std;

// O(n) time | O(1) space
vector<int> moveElementToEnd(vector<int> array, int toMove) {
  int i = 0;
  int j = array.size() - 1;
  while (i < j)
  {
    while (i < j && array[j] == toMove)
      j--;
    if (array[i] == toMove)
    {
      int tmp = array[i];
      array[i] = array[j];
      array[j] = tmp;
    }
    i++;
  }
  return array;
}
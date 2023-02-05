#include <vector>
using namespace std;

// O(n^2) time | O(1) space
int firstDuplicateValue(vector<int> array) { 
  for (int i = 0; i < array.size() - 1; i++)
    for (int j = i + 1; j < array.size(); j++)
      if (array[i] == array[j])
        return array[i];
  return -1;
}

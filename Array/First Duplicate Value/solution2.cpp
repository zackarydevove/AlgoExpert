#include <vector>
#include <unordered_set>
using namespace std;

// O(n) time | O(n) space
int firstDuplicateValue(vector<int> array) {
  unordered_set<int> map;
  for (int i : array)
  {
    if (map.find(i) != map.end())
      return i;
    map.insert(i);
  }
  return -1;
}

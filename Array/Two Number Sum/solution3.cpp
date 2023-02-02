#include <vector>
#include <unordered_set>
using namespace std;

/* 
  Hashset solution
  O(nlog(n)) time | O(1) space
 */
vector<int> twoNumberSum(vector<int> array, int targetSum) {
  unordered_set<int> tab;
  for (int x : array)
  {
    if (tab.find(targetSum - x) != tab.end())
      return {targetSum - x, x};
    else
      tab.insert(x);
  }
  return {};
}

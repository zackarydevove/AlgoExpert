using namespace std;
#include <unordered_set>

// Hashet solution: O(n) time | O(n) space
bool zeroSumSubarray(vector<int> nums) {
  unordered_set<int> set { 0 };

  int sum = 0;
  for (int i : nums){
    sum += i;
    if (set.find(sum) != set.end())
      return (true);
    set.insert(sum);
  }
  return (false);
}
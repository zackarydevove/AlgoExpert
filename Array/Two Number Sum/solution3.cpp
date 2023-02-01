#include <vector>
#include <algorithm>
using namespace std;

/* 
  Two pointers solution
  O(nlog(n)) time | O(1) space
 */
vector<int> twoNumberSum(vector<int> array, int targetSum) {
  int left = 0;
  int right = array.size() - 1;

  std::sort(array.begin(), array.end());
  while (left < right)
  {
      if (array[left] + array[right] < targetSum)
        left++;
      else if (array[left] + array[right] > targetSum)
        right--;
      else
        return {array[left], array[right]};
  }
  return {};
}
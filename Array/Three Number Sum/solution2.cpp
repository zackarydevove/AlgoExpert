#include <vector>
using namespace std;

/*
    2 pointers 
    O(n^2) time | O(n) space
*/
vector<vector<int>> threeNumberSum(vector<int> array, int targetSum) {
  sort(array.begin(), array.end());
  vector<vector<int>> tab;

  for (int i = 0; i < array.size() - 2; i++)
  {
    int left = i + 1;
    int right = array.size() - 1;
    while (left < right)
    {
      int res = array[i] + array[left] + array[right];
      if (res < targetSum)
        left++;
      else if (res > targetSum)
        right--;
      else
      {
        tab.push_back({array[i], array[left], array[right]});
        left++;
        right--;
      }
    }
  }
  return {tab};
}

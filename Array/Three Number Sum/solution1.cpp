#include <vector>
using namespace std;

/*
    Bruteforce solution
    O(n^3) time | O(n) space
*/
vector<vector<int>> threeNumberSum(vector<int> array, int targetSum) {
  sort(array.begin(), array.end());
  vector<vector<int>> tab;
  if (array.size() > 2)
    for (int i = 0; i < array.size() - 2; i++)
      for (int j = i + 1; j < array.size() - 1; j++)
        for (int k = j + 1; k < array.size(); k++)
          if (array[i] + array[j] + array[k] == targetSum)
            tab.push_back({array[i], array[j], array[k]});
  return {tab};
}

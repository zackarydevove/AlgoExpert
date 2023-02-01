#include <vector>
using namespace std;

/* 
  Bruteforce solution
  O(n^2) time | O(1) space
 */
vector<int> twoNumberSum(vector<int> array, int targetSum) {

  for (int i = 0; i < array.size() - 1; i++)
    for (int j = i + 1; j < array.size(); j++)
      if(array[j] + array[i] == targetSum)
        return {array[i], array[j]};
  return {};
}
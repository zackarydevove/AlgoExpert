#include <vector>
using namespace std;

//  O(n) time | O(1) space
bool isValidSubsequence(vector<int> array, vector<int> sequence) {
  for (int i : sequence)
    if (find(array.begin(), array.end(), i) == array.end() && array.end() != sequence.end())
      return (false);
  return (true);
}

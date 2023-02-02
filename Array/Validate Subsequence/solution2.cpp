using namespace std;

//  0(n) time | O(1) space
bool isValidSubsequence(vector<int> array, vector<int> sequence) {
  int j = 0;
  for (int i = 0; i < array.size(); i++)
      if (sequence[j] == array[i])
        j++;
  return (j == sequence.size());
}

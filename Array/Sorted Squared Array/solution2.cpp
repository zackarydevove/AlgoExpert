#include <vector>
using namespace std;

/*
    2 pointers solution
    O(n) time | O(n) space
*/
vector<int> sortedSquaredArray(vector<int> array) {
  int size = array.size();
  vector<int> tab(size, 0);
  int left = 0;
  int right = size - 1;

  while (size--)
  {
    int left_res = array[left] * array[left];
    int right_res = array[right] * array[right];
    if (left_res > right_res)
    {
      tab[size] = left_res;
      left++;
    }
    else
    {
      tab[size] = right_res;
      right--;
    }
  }
  return (tab);
}

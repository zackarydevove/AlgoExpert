#include <vector>
using namespace std;

/*
    Bruteforce solution
    O(nlog(n)) | O(n)
*/
vector<int> sortedSquaredArray(vector<int> array) {
  vector<int> tab;
  int j = 0;
  for (int i : array)
  {
    tab.insert(tab.begin() + j, i * i);
    j++;
  }
  sort(tab.begin(), tab.end());
  return (tab);
}

#include <vector>
using namespace std;

// O(nlog(n)) time | O(1) space
int nonConstructibleChange(vector<int> coins) {
  sort(coins.begin(), coins.end());

  int change = 0;
  for (int coin : coins){
    if (coin > change + 1)
      return (change + 1);
    change += coin;
  }
  return (change + 1);
}

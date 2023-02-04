using namespace std;

// O(n) time | O(1) space
int longestPeak(vector<int> array) {
    int res = 0;
    if (array.size() < 3)
      return 0;
    for(int n = 1; n < array.size() - 1; n++)
      if (array[n] > array[n-1] && array[n] > array[n+1])
      {
        for (int left = 1; n - left >= 0 && array[n-left] < array[n-left+1] && array[n-left] != array[n-left+1]; left++)
        for (int right = 1; n + right < array.size() && array[n+right] < array[n+right-1] && array[n+right] != array[n+right-1]; right++)
        res = max(res, left + right + 1);
      }
  return res;
}

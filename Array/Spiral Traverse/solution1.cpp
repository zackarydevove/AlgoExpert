using namespace std;

// O(n) time | O(n) space
vector<int> spiralTraverse(vector<vector<int>> array) {
  if (array.size() == 0)
    return {};

  vector<int> tab = {};
  int startr = 0;
  int endr = array.size() - 1;
  int startc = 0;
  int endc = array[0].size() - 1;

  while (startr <= endr && startc <= endc)
  {
    for (int col = startc; col <= endc; col++)
      tab.push_back(array[startr][col]);

    for (int row = startr + 1; row <= endr; row++)
      tab.push_back(array[row][endc]);

    for (int col = endc - 1; col >= startc; col--){
      if (startr == endr)
        break;
      tab.push_back(array[endr][col]);
    }
    for (int row = endr - 1; row > startr; row--){
      if (startc == endc)
        break;
      tab.push_back(array[row][startc]);
    }
    startr++;
    endr--;
    startc++;
    endc--;
  }
  return tab;
}

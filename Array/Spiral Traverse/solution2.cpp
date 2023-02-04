using namespace std;

// Recursive O(n) | O(n)
void spiralTraverseRecur(vector<vector<int>> &array, int startr, int endr, int startc, int endc, vector<int> &tab) {
  if (startr > endr || startc > endc)
    return ;

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

  spiralTraverseRecur(array, startr + 1, endr - 1, startc + 1, endc - 1, tab);
}

vector<int> spiralTraverse(vector<vector<int>> array) {
  if (array.size() == 0)
    return {};

  vector<int> tab = {};
  spiralTraverseRecur(array, 0, array.size() - 1, 0, array[0].size() - 1, tab);
  return (tab);
}

/*
 * Complete the 'diagonalDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

int diagonalDifference(vector<vector<int>> arr) {
  int left_to_right = 0;
  int right_to_left = 0;
  for (int i = 0; i < arr.size(); i++){
    left_to_right += arr[i][i];
    right_to_left += arr[i][arr[0].size() -i -1];
  }
  return abs(left_to_right - right_to_left);
}

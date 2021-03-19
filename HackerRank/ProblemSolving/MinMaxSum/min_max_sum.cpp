// Complete the miniMaxSum function below.
void miniMaxSum(vector<int> arr) {
  long sum {};
  long min = arr[0];
  long max = arr[0];
  for (size_t i = 0; i < arr.size(); i++){
    sum += arr[i];
    if (arr[i] < min) min = arr[i];
    if (arr[i] > max) max = arr[i];
  }
  cout << sum - max << ' ' << sum - min << '\n';
}

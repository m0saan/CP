// Complete the aVeryBigSum function below.
long aVeryBigSum(vector<long> ar) {

  long sum {};
  for (long& elem : ar)
    sum += elem;
  return sum;
}

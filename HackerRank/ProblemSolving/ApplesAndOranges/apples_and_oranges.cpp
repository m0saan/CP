// Complete the countApplesAndOranges function below.
void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
  vector<int> nOfApplesAndOranges(2, 0);
  for (int& apple : apples)
    if (apple + a >= s && apple + a <= t)
      nOfApplesAndOranges[0] += 1;
  for (int& orange : oranges)
    if (orange + b >= s && orange + b <= t)
      nOfApplesAndOranges[1] += 1;
  cout << nOfApplesAndOranges[0] << '\n' << nOfApplesAndOranges[1] << '\n';
}

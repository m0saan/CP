// Complete the plusMinus function below.
void plusMinus(vector<int> arr) {
  int nOfPositives = 0;
  int nOfNegatives = 0;
  int nOfZeros = 0;

  for (int& n  : arr){
    if (n == 0) nOfZeros++;
    else if (n > 0) nOfPositives++;
    else nOfNegatives++;
  }

  printf("%.6f\n", float {nOfPositives } / arr.size());
  printf("%.6f\n", float { nOfNegatives } / arr.size());
  printf("%.6f\n", float { nOfZeros } / arr.size());

}
